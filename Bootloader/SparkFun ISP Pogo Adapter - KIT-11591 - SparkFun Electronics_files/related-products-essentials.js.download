/*
* SFE module for the deferred 'essential' related products behavior on product detil pages
* Contributors: @mvanauken
*/
/* eslint-env browser */
/* global jQuery */
// eslint-disable-next-line no-extra-semi
; (function ($) {
  'use strict';
  var spinButtonTargetSelector = 'input[data-spin-buttons]';
  // State management is all on the elements (loaded, not loaded, expanded collapsed), no need for a widget.
  function loadEssentialsResults () {
    var $this = $(this);
    function insertResults (response) {
      var position;
      if (response) {
        // keep track of whether or not we've loaded the essentials before
        $this.html(response).data('essentials-loaded', true);
        // set up the spin buttons if present
        $this.find(spinButtonTargetSelector).each(function () {
          var $this = $(this),
              apiSettings = $this.data('spin-buttons');
          $this.spinner(apiSettings);
        });
        // finally reveal the panel
        $this.collapse('show');
        position = $('.visible-xs .cart-form').eq(-1).offset().top;
        if (position > 0) {
          $('body').animate({scrollTop: position}, 'slow');
        }
      }
    }
    // if the content has already been loaded, just reveal it if not already visible
    if ($this.data('essentials-loaded')) {
      $this.collapse('show');
      return;
    }
    $.ajax($this.data('essentials-url'), {
      dataType: 'html',
      success: insertResults
    });
  }
  function displayEssentials () {
    var $containers = $('[data-essentials-url]');
    $containers.each(loadEssentialsResults);
  }
  function init () {
    // add a submit event handler to the primary product add to cart forms to trgger the essentials display
    $('.cart-form').on('submit', displayEssentials);
    $('.essentials-notification').on('click', function (e) {
      e.preventDefault();
      displayEssentials(e);
    });
  }
  $(init);
})(jQuery);
