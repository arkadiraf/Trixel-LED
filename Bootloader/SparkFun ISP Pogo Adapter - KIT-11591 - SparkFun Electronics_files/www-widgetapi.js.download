(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var q;function aa(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ba="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function ca(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var da=ca(this);function t(a,b){if(b)a:{for(var c=da,d=a.split("."),e=0;e<d.length-1;e++){var f=d[e];if(!(f in c))break a;c=c[f]}d=d[d.length-1];e=c[d];f=b(e);f!=e&&null!=f&&ba(c,d,{configurable:!0,writable:!0,value:f})}}
t("Symbol",function(a){function b(e){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c("jscomp_symbol_"+(e||"")+"_"+d++,e)}
function c(e,f){this.f=e;ba(this,"description",{configurable:!0,writable:!0,value:f})}
if(a)return a;c.prototype.toString=function(){return this.f};
var d=0;return b});
t("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=da[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ba(d.prototype,a,{configurable:!0,writable:!0,value:function(){return ea(aa(this))}})}return a});
function ea(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function u(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];return b?b.call(a):{next:aa(a)}}
function fa(a){for(var b,c=[];!(b=a.next()).done;)c.push(b.value);return c}
var ha="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},ia;
if("function"==typeof Object.setPrototypeOf)ia=Object.setPrototypeOf;else{var ja;a:{var ka={a:!0},la={};try{la.__proto__=ka;ja=la.a;break a}catch(a){}ja=!1}ia=ja?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var ma=ia;
function na(a,b){a.prototype=ha(b.prototype);a.prototype.constructor=a;if(ma)ma(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.D=b.prototype}
function oa(){this.m=!1;this.i=null;this.g=void 0;this.f=1;this.j=this.l=0;this.A=this.h=null}
function qa(a){if(a.m)throw new TypeError("Generator is already running");a.m=!0}
oa.prototype.s=function(a){this.g=a};
function ra(a,b){a.h={ha:b,U:!0};a.f=a.l||a.j}
oa.prototype["return"]=function(a){this.h={"return":a};this.f=this.j};
function w(a,b,c){a.f=c;return{value:b}}
oa.prototype.v=function(a){this.f=a};
function sa(a){a.l=2;a.j=3}
function ta(a){a.l=0;a.h=null}
function ua(a){a.A=[a.h];a.l=0;a.j=0}
function va(a){var b=a.A.splice(0)[0];(b=a.h=a.h||b)?b.U?a.f=a.l||a.j:void 0!=b.v&&a.j<b.v?(a.f=b.v,a.h=null):a.f=a.j:a.f=0}
function wa(a){this.f=new oa;this.g=a}
function xa(a,b){qa(a.f);var c=a.f.i;if(c)return ya(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.f["return"]);
a.f["return"](b);return za(a)}
function ya(a,b,c,d){try{var e=b.call(a.f.i,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.f.m=!1,e;var f=e.value}catch(g){return a.f.i=null,ra(a.f,g),za(a)}a.f.i=null;d.call(a.f,f);return za(a)}
function za(a){for(;a.f.f;)try{var b=a.g(a.f);if(b)return a.f.m=!1,{value:b.value,done:!1}}catch(c){a.f.g=void 0,ra(a.f,c)}a.f.m=!1;if(a.f.h){b=a.f.h;a.f.h=null;if(b.U)throw b.ha;return{value:b["return"],done:!0}}return{value:void 0,done:!0}}
function Aa(a){this.next=function(b){qa(a.f);a.f.i?b=ya(a,a.f.i.next,b,a.f.s):(a.f.s(b),b=za(a));return b};
this["throw"]=function(b){qa(a.f);a.f.i?b=ya(a,a.f.i["throw"],b,a.f.s):(ra(a.f,b),b=za(a));return b};
this["return"]=function(b){return xa(a,b)};
this[Symbol.iterator]=function(){return this}}
function x(a,b){var c=new Aa(new wa(b));ma&&a.prototype&&ma(c,a.prototype);return c}
t("Reflect.setPrototypeOf",function(a){return a?a:ma?function(b,c){try{return ma(b,c),!0}catch(d){return!1}}:null});
function Ba(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
t("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=Ba(this,b,"endsWith");b+="";void 0===c&&(c=d.length);for(var e=Math.max(0,Math.min(c|0,d.length)),f=b.length;0<f&&0<e;)if(d[--e]!=b[--f])return!1;return 0>=f}});
t("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=Ba(this,b,"startsWith");b+="";for(var e=d.length,f=b.length,g=Math.max(0,Math.min(c|0,d.length)),k=0;k<f&&g<e;)if(d[g++]!=b[k++])return!1;return k>=f}});
function Ca(a,b){a instanceof String&&(a+="");var c=0,d={next:function(){if(c<a.length){var e=c++;return{value:b(e,a[e]),done:!1}}d.next=function(){return{done:!0,value:void 0}};
return d.next()}};
d[Symbol.iterator]=function(){return d};
return d}
t("Array.prototype.keys",function(a){return a?a:function(){return Ca(this,function(b){return b})}});
t("Array.prototype.values",function(a){return a?a:function(){return Ca(this,function(b,c){return c})}});
function z(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
var Da="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)z(d,e)&&(a[e]=d[e])}return a};
t("Object.assign",function(a){return a||Da});
t("Promise",function(a){function b(g){this.g=0;this.h=void 0;this.f=[];var k=this.i();try{g(k.resolve,k.reject)}catch(h){k.reject(h)}}
function c(){this.f=null}
function d(g){return g instanceof b?g:new b(function(k){k(g)})}
if(a)return a;c.prototype.g=function(g){if(null==this.f){this.f=[];var k=this;this.h(function(){k.j()})}this.f.push(g)};
var e=da.setTimeout;c.prototype.h=function(g){e(g,0)};
c.prototype.j=function(){for(;this.f&&this.f.length;){var g=this.f;this.f=[];for(var k=0;k<g.length;++k){var h=g[k];g[k]=null;try{h()}catch(l){this.i(l)}}}this.f=null};
c.prototype.i=function(g){this.h(function(){throw g;})};
b.prototype.i=function(){function g(l){return function(m){h||(h=!0,l.call(k,m))}}
var k=this,h=!1;return{resolve:g(this.F),reject:g(this.j)}};
b.prototype.F=function(g){if(g===this)this.j(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.ra(g);else{a:switch(typeof g){case "object":var k=null!=g;break a;case "function":k=!0;break a;default:k=!1}k?this.A(g):this.l(g)}};
b.prototype.A=function(g){var k=void 0;try{k=g.then}catch(h){this.j(h);return}"function"==typeof k?this.fa(k,g):this.l(g)};
b.prototype.j=function(g){this.m(2,g)};
b.prototype.l=function(g){this.m(1,g)};
b.prototype.m=function(g,k){if(0!=this.g)throw Error("Cannot settle("+g+", "+k+"): Promise already settled in state"+this.g);this.g=g;this.h=k;this.s()};
b.prototype.s=function(){if(null!=this.f){for(var g=0;g<this.f.length;++g)f.g(this.f[g]);this.f=null}};
var f=new c;b.prototype.ra=function(g){var k=this.i();g.G(k.resolve,k.reject)};
b.prototype.fa=function(g,k){var h=this.i();try{g.call(k,h.resolve,h.reject)}catch(l){h.reject(l)}};
b.prototype.then=function(g,k){function h(r,p){return"function"==typeof r?function(v){try{l(r(v))}catch(y){m(y)}}:p}
var l,m,n=new b(function(r,p){l=r;m=p});
this.G(h(g,l),h(k,m));return n};
b.prototype["catch"]=function(g){return this.then(void 0,g)};
b.prototype.G=function(g,k){function h(){switch(l.g){case 1:g(l.h);break;case 2:k(l.h);break;default:throw Error("Unexpected state: "+l.g);}}
var l=this;null==this.f?f.g(h):this.f.push(h)};
b.resolve=d;b.reject=function(g){return new b(function(k,h){h(g)})};
b.race=function(g){return new b(function(k,h){for(var l=u(g),m=l.next();!m.done;m=l.next())d(m.value).G(k,h)})};
b.all=function(g){var k=u(g),h=k.next();return h.done?d([]):new b(function(l,m){function n(v){return function(y){r[v]=y;p--;0==p&&l(r)}}
var r=[],p=0;do r.push(void 0),p++,d(h.value).G(n(r.length-1),m),h=k.next();while(!h.done)})};
return b});
t("Object.setPrototypeOf",function(a){return a||ma});
t("Array.prototype.entries",function(a){return a?a:function(){return Ca(this,function(b,c){return[b,c]})}});
t("WeakMap",function(a){function b(h){this.f=(k+=Math.random()+1).toString();if(h){h=u(h);for(var l;!(l=h.next()).done;)l=l.value,this.set(l[0],l[1])}}
function c(){}
function d(h){var l=typeof h;return"object"===l&&null!==h||"function"===l}
function e(h){if(!z(h,g)){var l=new c;ba(h,g,{value:l})}}
function f(h){var l=Object[h];l&&(Object[h]=function(m){if(m instanceof c)return m;Object.isExtensible(m)&&e(m);return l(m)})}
if(function(){if(!a||!Object.seal)return!1;try{var h=Object.seal({}),l=Object.seal({}),m=new a([[h,2],[l,3]]);if(2!=m.get(h)||3!=m.get(l))return!1;m["delete"](h);m.set(l,4);return!m.has(h)&&4==m.get(l)}catch(n){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var k=0;b.prototype.set=function(h,l){if(!d(h))throw Error("Invalid WeakMap key");e(h);if(!z(h,g))throw Error("WeakMap key fail: "+h);h[g][this.f]=l;return this};
b.prototype.get=function(h){return d(h)&&z(h,g)?h[g][this.f]:void 0};
b.prototype.has=function(h){return d(h)&&z(h,g)&&z(h[g],this.f)};
b.prototype["delete"]=function(h){return d(h)&&z(h,g)&&z(h[g],this.f)?delete h[g][this.f]:!1};
return b});
t("Map",function(a){function b(){var k={};return k.previous=k.next=k.head=k}
function c(k,h){var l=k.f;return ea(function(){if(l){for(;l.head!=k.f;)l=l.previous;for(;l.next!=l.head;)return l=l.next,{done:!1,value:h(l)};l=null}return{done:!0,value:void 0}})}
function d(k,h){var l=h&&typeof h;"object"==l||"function"==l?f.has(h)?l=f.get(h):(l=""+ ++g,f.set(h,l)):l="p_"+h;var m=k.g[l];if(m&&z(k.g,l))for(var n=0;n<m.length;n++){var r=m[n];if(h!==h&&r.key!==r.key||h===r.key)return{id:l,list:m,index:n,o:r}}return{id:l,list:m,index:-1,o:void 0}}
function e(k){this.g={};this.f=b();this.size=0;if(k){k=u(k);for(var h;!(h=k.next()).done;)h=h.value,this.set(h[0],h[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var k=Object.seal({x:4}),h=new a(u([[k,"s"]]));if("s"!=h.get(k)||1!=h.size||h.get({x:4})||h.set({x:4},"t")!=h||2!=h.size)return!1;var l=h.entries(),m=l.next();if(m.done||m.value[0]!=k||"s"!=m.value[1])return!1;m=l.next();return m.done||4!=m.value[0].x||"t"!=m.value[1]||!l.next().done?!1:!0}catch(n){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(k,h){k=0===k?0:k;var l=d(this,k);l.list||(l.list=this.g[l.id]=[]);l.o?l.o.value=h:(l.o={next:this.f,previous:this.f.previous,head:this.f,key:k,value:h},l.list.push(l.o),this.f.previous.next=l.o,this.f.previous=l.o,this.size++);return this};
e.prototype["delete"]=function(k){k=d(this,k);return k.o&&k.list?(k.list.splice(k.index,1),k.list.length||delete this.g[k.id],k.o.previous.next=k.o.next,k.o.next.previous=k.o.previous,k.o.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this.g={};this.f=this.f.previous=b();this.size=0};
e.prototype.has=function(k){return!!d(this,k).o};
e.prototype.get=function(k){return(k=d(this,k).o)&&k.value};
e.prototype.entries=function(){return c(this,function(k){return[k.key,k.value]})};
e.prototype.keys=function(){return c(this,function(k){return k.key})};
e.prototype.values=function(){return c(this,function(k){return k.value})};
e.prototype.forEach=function(k,h){for(var l=this.entries(),m;!(m=l.next()).done;)m=m.value,k.call(h,m[1],m[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
t("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)z(b,d)&&c.push([d,b[d]]);return c}});
t("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
t("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length,f=c||0;for(0>f&&(f=Math.max(f+e,0));f<e;f++){var g=d[f];if(g===b||Object.is(g,b))return!0}return!1}});
t("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==Ba(this,b,"includes").indexOf(b,c||0)}});
t("Set",function(a){function b(c){this.f=new Map;if(c){c=u(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.f.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(u([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.f.set(c,c);this.size=this.f.size;return this};
b.prototype["delete"]=function(c){c=this.f["delete"](c);this.size=this.f.size;return c};
b.prototype.clear=function(){this.f.clear();this.size=0};
b.prototype.has=function(c){return this.f.has(c)};
b.prototype.entries=function(){return this.f.entries()};
b.prototype.values=function(){return this.f.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.f.forEach(function(f){return c.call(d,f,f,e)})};
return b});
var A=this||self;function B(a,b){for(var c=a.split("."),d=b||A,e=0;e<c.length;e++)if(d=d[c[e]],null==d)return null;return d}
function Ea(){}
function Fa(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Ga(a){var b=Fa(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Ha(a){return"function"==Fa(a)}
function Ia(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Ja(a){return Object.prototype.hasOwnProperty.call(a,Ka)&&a[Ka]||(a[Ka]=++La)}
var Ka="closure_uid_"+(1E9*Math.random()>>>0),La=0;function Ma(a,b,c){return a.call.apply(a.bind,arguments)}
function Na(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Oa(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Oa=Ma:Oa=Na;return Oa.apply(null,arguments)}
var C=Date.now;function D(a,b){var c=a.split("."),d=A;c[0]in d||"undefined"==typeof d.execScript||d.execScript("var "+c[0]);for(var e;c.length&&(e=c.shift());)c.length||void 0===b?d[e]&&d[e]!==Object.prototype[e]?d=d[e]:d=d[e]={}:d[e]=b}
function E(a,b){function c(){}
c.prototype=b.prototype;a.D=b.prototype;a.prototype=new c;a.prototype.constructor=a}
function Pa(a){return a}
;function Qa(a){if(Error.captureStackTrace)Error.captureStackTrace(this,Qa);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))}
E(Qa,Error);Qa.prototype.name="CustomError";var Ra=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},G=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},Sa=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
G(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function Ta(a,b){a:{var c=a.length;for(var d="string"===typeof a?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){c=e;break a}c=-1}return 0>c?null:"string"===typeof a?a.charAt(c):a[c]}
function Ua(a){return Array.prototype.concat.apply([],arguments)}
function Wa(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]}
function Xa(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Ga(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function Ya(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;function Za(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function $a(a){var b=ab,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function bb(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function cb(a){var b=Fa(a);if("object"==b||"array"==b){if(Ha(a.clone))return a.clone();b="array"==b?[]:{};for(var c in a)b[c]=cb(a[c]);return b}return a}
var db="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function eb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<db.length;f++)c=db[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var fb;var gb=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]},hb=/&/g,ib=/</g,jb=/>/g,kb=/"/g,lb=/'/g,mb=/\x00/g,nb=/[\x00&<>"']/;var ob;a:{var pb=A.navigator;if(pb){var qb=pb.userAgent;if(qb){ob=qb;break a}}ob=""}function H(a){return-1!=ob.indexOf(a)}
;function rb(){}
;var sb=H("Opera"),tb=H("Trident")||H("MSIE"),ub=H("Edge"),vb=H("Gecko")&&!(-1!=ob.toLowerCase().indexOf("webkit")&&!H("Edge"))&&!(H("Trident")||H("MSIE"))&&!H("Edge"),wb=-1!=ob.toLowerCase().indexOf("webkit")&&!H("Edge");function xb(){var a=A.document;return a?a.documentMode:void 0}
var yb;a:{var zb="",Ab=function(){var a=ob;if(vb)return/rv:([^\);]+)(\)|;)/.exec(a);if(ub)return/Edge\/([\d\.]+)/.exec(a);if(tb)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(wb)return/WebKit\/(\S+)/.exec(a);if(sb)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
Ab&&(zb=Ab?Ab[1]:"");if(tb){var Bb=xb();if(null!=Bb&&Bb>parseFloat(zb)){yb=String(Bb);break a}}yb=zb}var Cb=yb,Db;if(A.document&&tb){var Eb=xb();Db=Eb?Eb:parseInt(Cb,10)||void 0}else Db=void 0;var Fb=Db;var Gb={},Hb=null;var I=window;function Ib(a){var b=B("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(f){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||A.$googDebugFname||b}catch(f){e="Not available",c=!0}return!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name?a:(b=a.message,null==b&&(a.constructor&&
a.constructor instanceof Function?(a.constructor.name?b=a.constructor.name:(b=a.constructor,Jb[b]?b=Jb[b]:(b=String(b),Jb[b]||(c=/function\s+([^\(]+)/m.exec(b),Jb[b]=c?c[1]:"[Anonymous]"),b=Jb[b])),b='Unknown Error of type "'+b+'"'):b="Unknown Error of unknown type"),{message:b,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:a.stack||"Not available"})}
var Jb={};function Kb(a){this.f=a||{cookie:""}}
q=Kb.prototype;q.isEnabled=function(){return navigator.cookieEnabled};
q.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.La;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var k=c.V}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===k&&(k=-1);c=f?";domain="+f:"";g=g?";path="+g:"";d=d?";secure":"";k=0>k?"":0==k?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(C()+1E3*k)).toUTCString();this.f.cookie=a+"="+b+c+g+k+d+(null!=e?";samesite="+e:"")};
q.get=function(a,b){for(var c=a+"=",d=(this.f.cookie||"").split(";"),e=0,f;e<d.length;e++){f=gb(d[e]);if(0==f.lastIndexOf(c,0))return f.substr(c.length);if(f==a)return""}return b};
q.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{V:0,path:b,domain:c});return d};
q.isEmpty=function(){return!this.f.cookie};
q.clear=function(){for(var a=(this.f.cookie||"").split(";"),b=[],c=[],d,e,f=0;f<a.length;f++)e=gb(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));for(a=b.length-1;0<=a;a--)this.remove(b[a])};
var Lb=new Kb("undefined"==typeof document?null:document);function Mb(a,b){this.width=a;this.height=b}
q=Mb.prototype;q.clone=function(){return new Mb(this.width,this.height)};
q.aspectRatio=function(){return this.width/this.height};
q.isEmpty=function(){return!(this.width*this.height)};
q.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
q.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
q.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};function Nb(a,b){var c,d;var e=document;e=b||e;if(e.querySelectorAll&&e.querySelector&&a)return e.querySelectorAll(a?"."+a:"");if(a&&e.getElementsByClassName){var f=e.getElementsByClassName(a);return f}f=e.getElementsByTagName("*");if(a){var g={};for(c=d=0;e=f[c];c++){var k=e.className,h;if(h="function"==typeof k.split)h=0<=Ra(k.split(/\s+/),a);h&&(g[d++]=e)}g.length=d;return g}return f}
function Ob(){var a=document;var b="IFRAME";"application/xhtml+xml"===a.contentType&&(b=b.toLowerCase());return a.createElement(b)}
function Pb(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;var Qb=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^\\/?#]*)@)?([^\\/?#]*?)(?::([0-9]+))?(?=[\\/?#]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function Rb(a){return a?decodeURI(a):a}
function J(a){return Rb(a.match(Qb)[3]||null)}
function Sb(a){var b=a.match(Qb);a=b[1];var c=b[2],d=b[3];b=b[4];var e="";a&&(e+=a+":");d&&(e+="//",c&&(e+=c+"@"),e+=d,b&&(e+=":"+b));return e}
function Tb(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)Tb(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function Ub(a){var b=[],c;for(c in a)Tb(c,a[c],b);return b.join("&")}
var Vb=/#|$/;function Wb(a){var b=Xb;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a.call(void 0,b[c],c,b)}
function Yb(){var a=[];Wb(function(b){a.push(b)});
return a}
var Xb={sa:"allow-forms",ta:"allow-modals",ua:"allow-orientation-lock",va:"allow-pointer-lock",wa:"allow-popups",xa:"allow-popups-to-escape-sandbox",ya:"allow-presentation",za:"allow-same-origin",Aa:"allow-scripts",Ba:"allow-top-navigation",Ca:"allow-top-navigation-by-user-activation"},Zb=Ya(function(){return Yb()});
function $b(){var a=Ob(),b={};G(Zb(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
;function ac(){this.h=this.h;this.i=this.i}
ac.prototype.h=!1;ac.prototype.dispose=function(){this.h||(this.h=!0,this.N())};
ac.prototype.N=function(){if(this.i)for(;this.i.length;)this.i.shift()()};function K(a,b){var c=void 0;return new (c||(c=Promise))(function(d,e){function f(h){try{k(b.next(h))}catch(l){e(l)}}
function g(h){try{k(b["throw"](h))}catch(l){e(l)}}
function k(h){h.done?d(h.value):(new c(function(l){l(h.value)})).then(f,g)}
k((b=b.apply(a,void 0)).next())})}
;var bc=(new Date).getTime();function cc(a){if(!a)return"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));a=a.substring(0,a.indexOf("://"));if("http"!==a&&"https"!==a&&"chrome-extension"!==a&&"file"!==a&&"android-app"!==a&&"chrome-search"!==a&&"chrome-untrusted"!==a&&"chrome"!==a&&"app"!==a)throw Error("Invalid URI scheme in origin: "+a);c="";
var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===a&&"80"!==e||"https"===a&&"443"!==e)c=":"+e}return a+"://"+b+c}
;function dc(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;m=l=0}
function b(n){for(var r=g,p=0;64>p;p+=4)r[p/4]=n[p]<<24|n[p+1]<<16|n[p+2]<<8|n[p+3];for(p=16;80>p;p++)n=r[p-3]^r[p-8]^r[p-14]^r[p-16],r[p]=(n<<1|n>>>31)&4294967295;n=e[0];var v=e[1],y=e[2],F=e[3],Q=e[4];for(p=0;80>p;p++){if(40>p)if(20>p){var pa=F^v&(y^F);var Va=1518500249}else pa=v^y^F,Va=1859775393;else 60>p?(pa=v&y|F&(v|y),Va=2400959708):(pa=v^y^F,Va=3395469782);pa=((n<<5|n>>>27)&4294967295)+pa+Q+Va+r[p]&4294967295;Q=F;F=y;y=(v<<30|v>>>2)&4294967295;v=n;n=pa}e[0]=e[0]+n&4294967295;e[1]=e[1]+v&4294967295;
e[2]=e[2]+y&4294967295;e[3]=e[3]+F&4294967295;e[4]=e[4]+Q&4294967295}
function c(n,r){if("string"===typeof n){n=unescape(encodeURIComponent(n));for(var p=[],v=0,y=n.length;v<y;++v)p.push(n.charCodeAt(v));n=p}r||(r=n.length);p=0;if(0==l)for(;p+64<r;)b(n.slice(p,p+64)),p+=64,m+=64;for(;p<r;)if(f[l++]=n[p++],m++,64==l)for(l=0,b(f);p+64<r;)b(n.slice(p,p+64)),p+=64,m+=64}
function d(){var n=[],r=8*m;56>l?c(k,56-l):c(k,64-(l-56));for(var p=63;56<=p;p--)f[p]=r&255,r>>>=8;b(f);for(p=r=0;5>p;p++)for(var v=24;0<=v;v-=8)n[r++]=e[p]>>v&255;return n}
for(var e=[],f=[],g=[],k=[128],h=1;64>h;++h)k[h]=0;var l,m;a();return{reset:a,update:c,digest:d,ga:function(){for(var n=d(),r="",p=0;p<n.length;p++)r+="0123456789ABCDEF".charAt(Math.floor(n[p]/16))+"0123456789ABCDEF".charAt(n[p]%16);return r}}}
;function ec(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],G(d,function(k){e.push(k)}),fc(e.join(" "));
var f=[],g=[];G(c,function(k){g.push(k.key);f.push(k.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];G(d,function(k){e.push(k)});
a=fc(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function fc(a){var b=dc();b.update(a);return b.ga().toLowerCase()}
;function gc(a){var b=cc(String(A.location.href)),c;(c=A.__SAPISID||A.__APISID||A.__OVERRIDE_SID)?c=!0:(c=new Kb(document),c=c.get("SAPISID")||c.get("APISID")||c.get("__Secure-3PAPISID")||c.get("SID"),c=!!c);if(c&&(c=(b=0==b.indexOf("https:")||0==b.indexOf("chrome-extension:"))?A.__SAPISID:A.__APISID,c||(c=new Kb(document),c=c.get(b?"SAPISID":"APISID")||c.get("__Secure-3PAPISID")),c)){b=b?"SAPISIDHASH":"APISIDHASH";var d=String(A.location.href);return d&&c&&b?[b,ec(cc(d),c,a||null)].join(" "):null}return null}
;function hc(){this.g=[];this.f=-1}
hc.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&0===a%1&&this.g[a]!=b&&(this.g[a]=b,this.f=-1)};
hc.prototype.get=function(a){return!!this.g[a]};
function ic(a){-1==a.f&&(a.f=Sa(a.g,function(b,c,d){return c?b+Math.pow(2,d):b},0));
return a.f}
;function jc(a,b){this.h=a;this.i=b;this.g=0;this.f=null}
jc.prototype.get=function(){if(0<this.g){this.g--;var a=this.f;this.f=a.next;a.next=null}else a=this.h();return a};
function kc(a,b){a.i(b);100>a.g&&(a.g++,b.next=a.f,a.f=b)}
;function lc(a){A.setTimeout(function(){throw a;},0)}
var mc;function nc(){var a=A.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!H("Presto")&&(a=function(){var e=Ob();e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),k="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Oa(function(h){if(("*"==k||h.origin==k)&&h.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,k)}}});
if("undefined"!==typeof a&&!H("Trident")&&!H("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.T;c.T=null;e()}};
return function(e){d.next={T:e};d=d.next;b.port2.postMessage(0)}}return function(e){A.setTimeout(e,0)}}
;function oc(){this.g=this.f=null}
var qc=new jc(function(){return new pc},function(a){a.reset()});
oc.prototype.add=function(a,b){var c=qc.get();c.set(a,b);this.g?this.g.next=c:this.f=c;this.g=c};
oc.prototype.remove=function(){var a=null;this.f&&(a=this.f,this.f=this.f.next,this.f||(this.g=null),a.next=null);return a};
function pc(){this.next=this.scope=this.f=null}
pc.prototype.set=function(a,b){this.f=a;this.scope=b;this.next=null};
pc.prototype.reset=function(){this.next=this.scope=this.f=null};function rc(a,b){sc||tc();uc||(sc(),uc=!0);vc.add(a,b)}
var sc;function tc(){if(A.Promise&&A.Promise.resolve){var a=A.Promise.resolve(void 0);sc=function(){a.then(wc)}}else sc=function(){var b=wc;
!Ha(A.setImmediate)||A.Window&&A.Window.prototype&&!H("Edge")&&A.Window.prototype.setImmediate==A.setImmediate?(mc||(mc=nc()),mc(b)):A.setImmediate(b)}}
var uc=!1,vc=new oc;function wc(){for(var a;a=vc.remove();){try{a.f.call(a.scope)}catch(b){lc(b)}kc(qc,a)}uc=!1}
;function xc(){this.g=-1}
;function yc(){this.g=64;this.f=[];this.l=[];this.m=[];this.i=[];this.i[0]=128;for(var a=1;a<this.g;++a)this.i[a]=0;this.j=this.h=0;this.reset()}
E(yc,xc);yc.prototype.reset=function(){this.f[0]=1732584193;this.f[1]=4023233417;this.f[2]=2562383102;this.f[3]=271733878;this.f[4]=3285377520;this.j=this.h=0};
function zc(a,b,c){c||(c=0);var d=a.m;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.f[0];c=a.f[1];var g=a.f[2],k=a.f[3],h=a.f[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=k^c&(g^k);var l=1518500249}else f=c^g^k,l=1859775393;else 60>e?(f=c&g|k&(c|g),l=2400959708):
(f=c^g^k,l=3395469782);f=(b<<5|b>>>27)+f+h+l+d[e]&4294967295;h=k;k=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.f[0]=a.f[0]+b&4294967295;a.f[1]=a.f[1]+c&4294967295;a.f[2]=a.f[2]+g&4294967295;a.f[3]=a.f[3]+k&4294967295;a.f[4]=a.f[4]+h&4294967295}
yc.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.g,d=0,e=this.l,f=this.h;d<b;){if(0==f)for(;d<=c;)zc(this,a,d),d+=this.g;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.g){zc(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.g){zc(this,e);f=0;break}}this.h=f;this.j+=b}};
yc.prototype.digest=function(){var a=[],b=8*this.j;56>this.h?this.update(this.i,56-this.h):this.update(this.i,this.g-(this.h-56));for(var c=this.g-1;56<=c;c--)this.l[c]=b&255,b/=256;zc(this,this.l);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.f[c]>>d&255,++b;return a};var Ac="StopIteration"in A?A.StopIteration:{message:"StopIteration",stack:""};function Bc(){}
Bc.prototype.next=function(){throw Ac;};
Bc.prototype.B=function(){return this};
function Cc(a){if(a instanceof Bc)return a;if("function"==typeof a.B)return a.B(!1);if(Ga(a)){var b=0,c=new Bc;c.next=function(){for(;;){if(b>=a.length)throw Ac;if(b in a)return a[b++];b++}};
return c}throw Error("Not implemented");}
function Dc(a,b){if(Ga(a))try{G(a,b,void 0)}catch(c){if(c!==Ac)throw c;}else{a=Cc(a);try{for(;;)b.call(void 0,a.next(),void 0,a)}catch(c){if(c!==Ac)throw c;}}}
function Ec(a){if(Ga(a))return Wa(a);a=Cc(a);var b=[];Dc(a,function(c){b.push(c)});
return b}
;function Fc(a,b){this.h={};this.f=[];this.i=this.g=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Fc)for(c=Gc(a),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
function Gc(a){Hc(a);return a.f.concat()}
q=Fc.prototype;q.equals=function(a,b){if(this===a)return!0;if(this.g!=a.g)return!1;var c=b||Ic;Hc(this);for(var d,e=0;d=this.f[e];e++)if(!c(this.get(d),a.get(d)))return!1;return!0};
function Ic(a,b){return a===b}
q.isEmpty=function(){return 0==this.g};
q.clear=function(){this.h={};this.i=this.g=this.f.length=0};
q.remove=function(a){return Object.prototype.hasOwnProperty.call(this.h,a)?(delete this.h[a],this.g--,this.i++,this.f.length>2*this.g&&Hc(this),!0):!1};
function Hc(a){if(a.g!=a.f.length){for(var b=0,c=0;b<a.f.length;){var d=a.f[b];Object.prototype.hasOwnProperty.call(a.h,d)&&(a.f[c++]=d);b++}a.f.length=c}if(a.g!=a.f.length){var e={};for(c=b=0;b<a.f.length;)d=a.f[b],Object.prototype.hasOwnProperty.call(e,d)||(a.f[c++]=d,e[d]=1),b++;a.f.length=c}}
q.get=function(a,b){return Object.prototype.hasOwnProperty.call(this.h,a)?this.h[a]:b};
q.set=function(a,b){Object.prototype.hasOwnProperty.call(this.h,a)||(this.g++,this.f.push(a),this.i++);this.h[a]=b};
q.forEach=function(a,b){for(var c=Gc(this),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
q.clone=function(){return new Fc(this)};
q.B=function(a){Hc(this);var b=0,c=this.i,d=this,e=new Bc;e.next=function(){if(c!=d.i)throw Error("The map has changed since the iterator was created");if(b>=d.f.length)throw Ac;var f=d.f[b++];return a?f:d.h[f]};
return e};var Jc=A.JSON.stringify;function L(a){this.f=0;this.m=void 0;this.i=this.g=this.h=null;this.j=this.l=!1;if(a!=Ea)try{var b=this;a.call(void 0,function(c){Kc(b,2,c)},function(c){Kc(b,3,c)})}catch(c){Kc(this,3,c)}}
function Lc(){this.next=this.context=this.onRejected=this.g=this.f=null;this.h=!1}
Lc.prototype.reset=function(){this.context=this.onRejected=this.g=this.f=null;this.h=!1};
var Mc=new jc(function(){return new Lc},function(a){a.reset()});
function Nc(a,b,c){var d=Mc.get();d.g=a;d.onRejected=b;d.context=c;return d}
function Oc(a){if(a instanceof L)return a;var b=new L(Ea);Kc(b,2,a);return b}
function Pc(a){return new L(function(b,c){c(a)})}
L.prototype.then=function(a,b,c){return Qc(this,Ha(a)?a:null,Ha(b)?b:null,c)};
L.prototype.$goog_Thenable=!0;function Rc(a,b){return Qc(a,null,b,void 0)}
L.prototype.cancel=function(a){if(0==this.f){var b=new Sc(a);rc(function(){Tc(this,b)},this)}};
function Tc(a,b){if(0==a.f)if(a.h){var c=a.h;if(c.g){for(var d=0,e=null,f=null,g=c.g;g&&(g.h||(d++,g.f==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.f&&1==d?Tc(c,b):(f?(d=f,d.next==c.i&&(c.i=d),d.next=d.next.next):Uc(c),Vc(c,e,3,b)))}a.h=null}else Kc(a,3,b)}
function Wc(a,b){a.g||2!=a.f&&3!=a.f||Xc(a);a.i?a.i.next=b:a.g=b;a.i=b}
function Qc(a,b,c,d){var e=Nc(null,null,null);e.f=new L(function(f,g){e.g=b?function(k){try{var h=b.call(d,k);f(h)}catch(l){g(l)}}:f;
e.onRejected=c?function(k){try{var h=c.call(d,k);void 0===h&&k instanceof Sc?g(k):f(h)}catch(l){g(l)}}:g});
e.f.h=a;Wc(a,e);return e.f}
L.prototype.A=function(a){this.f=0;Kc(this,2,a)};
L.prototype.F=function(a){this.f=0;Kc(this,3,a)};
function Kc(a,b,c){if(0==a.f){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.f=1;a:{var d=c,e=a.A,f=a.F;if(d instanceof L){Wc(d,Nc(e||Ea,f||null,a));var g=!0}else{if(d)try{var k=!!d.$goog_Thenable}catch(l){k=!1}else k=!1;if(k)d.then(e,f,a),g=!0;else{if(Ia(d))try{var h=d.then;if(Ha(h)){Yc(d,h,e,f,a);g=!0;break a}}catch(l){f.call(a,l);g=!0;break a}g=!1}}}g||(a.m=c,a.f=b,a.h=null,Xc(a),3!=b||c instanceof Sc||Zc(a,c))}}
function Yc(a,b,c,d,e){function f(h){k||(k=!0,d.call(e,h))}
function g(h){k||(k=!0,c.call(e,h))}
var k=!1;try{b.call(a,g,f)}catch(h){f(h)}}
function Xc(a){a.l||(a.l=!0,rc(a.s,a))}
function Uc(a){var b=null;a.g&&(b=a.g,a.g=b.next,b.next=null);a.g||(a.i=null);return b}
L.prototype.s=function(){for(var a;a=Uc(this);)Vc(this,a,this.f,this.m);this.l=!1};
function Vc(a,b,c,d){if(3==c&&b.onRejected&&!b.h)for(;a&&a.j;a=a.h)a.j=!1;if(b.f)b.f.h=null,$c(b,c,d);else try{b.h?b.g.call(b.context):$c(b,c,d)}catch(e){ad.call(null,e)}kc(Mc,b)}
function $c(a,b,c){2==b?a.g.call(a.context,c):a.onRejected&&a.onRejected.call(a.context,c)}
function Zc(a,b){a.j=!0;rc(function(){a.j&&ad.call(null,b)})}
var ad=lc;function Sc(a){Qa.call(this,a)}
E(Sc,Qa);Sc.prototype.name="cancel";function M(a){ac.call(this);this.m=1;this.j=[];this.l=0;this.f=[];this.g={};this.s=!!a}
E(M,ac);q=M.prototype;q.subscribe=function(a,b,c){var d=this.g[a];d||(d=this.g[a]=[]);var e=this.m;this.f[e]=a;this.f[e+1]=b;this.f[e+2]=c;this.m=e+3;d.push(e);return e};
function bd(a,b,c){var d=cd;if(a=d.g[a]){var e=d.f;(a=Ta(a,function(f){return e[f+1]==b&&e[f+2]==c}))&&d.J(a)}}
q.J=function(a){var b=this.f[a];if(b){var c=this.g[b];if(0!=this.l)this.j.push(a),this.f[a+1]=Ea;else{if(c){var d=Ra(c,a);0<=d&&Array.prototype.splice.call(c,d,1)}delete this.f[a];delete this.f[a+1];delete this.f[a+2]}}return!!b};
q.R=function(a,b){var c=this.g[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.s)for(e=0;e<c.length;e++){var g=c[e];dd(this.f[g+1],this.f[g+2],d)}else{this.l++;try{for(e=0,f=c.length;e<f;e++)g=c[e],this.f[g+1].apply(this.f[g+2],d)}finally{if(this.l--,0<this.j.length&&0==this.l)for(;c=this.j.pop();)this.J(c)}}return 0!=e}return!1};
function dd(a,b,c){rc(function(){a.apply(b,c)})}
q.clear=function(a){if(a){var b=this.g[a];b&&(G(b,this.J,this),delete this.g[a])}else this.f.length=0,this.g={}};
q.N=function(){M.D.N.call(this);this.clear();this.j.length=0};function ed(a){this.f=a}
ed.prototype.set=function(a,b){void 0===b?this.f.remove(a):this.f.set(a,Jc(b))};
ed.prototype.get=function(a){try{var b=this.f.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
ed.prototype.remove=function(a){this.f.remove(a)};function fd(a){this.f=a}
E(fd,ed);function gd(a){this.data=a}
function hd(a){return void 0===a||a instanceof gd?a:new gd(a)}
fd.prototype.set=function(a,b){fd.D.set.call(this,a,hd(b))};
fd.prototype.g=function(a){a=fd.D.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
fd.prototype.get=function(a){if(a=this.g(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function id(a){this.f=a}
E(id,fd);id.prototype.set=function(a,b,c){if(b=hd(b)){if(c){if(c<C()){id.prototype.remove.call(this,a);return}b.expiration=c}b.creation=C()}id.D.set.call(this,a,b)};
id.prototype.g=function(a){var b=id.D.g.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<C()||c&&c>C())id.prototype.remove.call(this,a);else return b}};function jd(){}
;function kd(){}
E(kd,jd);kd.prototype.clear=function(){var a=Ec(this.B(!0)),b=this;G(a,function(c){b.remove(c)})};function ld(a){this.f=a}
E(ld,kd);q=ld.prototype;q.isAvailable=function(){if(!this.f)return!1;try{return this.f.setItem("__sak","1"),this.f.removeItem("__sak"),!0}catch(a){return!1}};
q.set=function(a,b){try{this.f.setItem(a,b)}catch(c){if(0==this.f.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
q.get=function(a){a=this.f.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
q.remove=function(a){this.f.removeItem(a)};
q.B=function(a){var b=0,c=this.f,d=new Bc;d.next=function(){if(b>=c.length)throw Ac;var e=c.key(b++);if(a)return e;e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return e};
return d};
q.clear=function(){this.f.clear()};
q.key=function(a){return this.f.key(a)};function md(){var a=null;try{a=window.localStorage||null}catch(b){}this.f=a}
E(md,ld);function nd(a,b){this.g=a;this.f=null;if(tb&&!(9<=Number(Fb))){od||(od=new Fc);this.f=od.get(a);this.f||(b?this.f=document.getElementById(b):(this.f=document.createElement("userdata"),this.f.addBehavior("#default#userData"),document.body.appendChild(this.f)),od.set(a,this.f));try{this.f.load(this.g)}catch(c){this.f=null}}}
E(nd,kd);var pd={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},od=null;function qd(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return pd[b]})}
q=nd.prototype;q.isAvailable=function(){return!!this.f};
q.set=function(a,b){this.f.setAttribute(qd(a),b);rd(this)};
q.get=function(a){a=this.f.getAttribute(qd(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
q.remove=function(a){this.f.removeAttribute(qd(a));rd(this)};
q.B=function(a){var b=0,c=this.f.XMLDocument.documentElement.attributes,d=new Bc;d.next=function(){if(b>=c.length)throw Ac;var e=c[b++];if(a)return decodeURIComponent(e.nodeName.replace(/\./g,"%")).substr(1);e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return e};
return d};
q.clear=function(){for(var a=this.f.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);rd(this)};
function rd(a){try{a.f.save(a.g)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function sd(a,b){this.g=a;this.f=b+"::"}
E(sd,kd);sd.prototype.set=function(a,b){this.g.set(this.f+a,b)};
sd.prototype.get=function(a){return this.g.get(this.f+a)};
sd.prototype.remove=function(a){this.g.remove(this.f+a)};
sd.prototype.B=function(a){var b=this.g.B(!0),c=this,d=new Bc;d.next=function(){for(var e=b.next();e.substr(0,c.f.length)!=c.f;)e=b.next();return a?e.substr(c.f.length):c.g.get(e)};
return d};var N=window.yt&&window.yt.config_||window.ytcfg&&window.ytcfg.data_||{};D("yt.config_",N);function td(a){var b=arguments;1<b.length?N[b[0]]=b[1]:1===b.length&&Object.assign(N,b[0])}
function O(a,b){return a in N?N[a]:b}
;var ud=[];function vd(a){ud.forEach(function(b){return b(a)})}
function wd(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){xd(b),vd(b)}}:a}
function xd(a){var b=B("yt.logging.errors.log");b?b(a,"ERROR",void 0,void 0,void 0):(b=O("ERRORS",[]),b.push([a,"ERROR",void 0,void 0,void 0]),td("ERRORS",b))}
function yd(a){var b=B("yt.logging.errors.log");b?b(a,"WARNING",void 0,void 0,void 0):(b=O("ERRORS",[]),b.push([a,"WARNING",void 0,void 0,void 0]),td("ERRORS",b))}
;var zd=0;D("ytDomDomGetNextId",B("ytDomDomGetNextId")||function(){return++zd});var Ad={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function Bd(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.clientY=this.clientX=0;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in Ad||(this[b]=a[b]);var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;if(d)try{d=d.nodeName?d:null}catch(e){d=null}else"mouseover"==
this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey}}catch(e){}}
Bd.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
Bd.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
Bd.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var ab=A.ytEventsEventsListeners||{};D("ytEventsEventsListeners",ab);var Cd=A.ytEventsEventsCounter||{count:0};D("ytEventsEventsCounter",Cd);
function Dd(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return $a(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Ia(e[4])&&Ia(d)&&bb(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
function Ed(a){a&&("string"==typeof a&&(a=[a]),G(a,function(b){if(b in ab){var c=ab[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?Fd()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete ab[b]}}))}
var Fd=Ya(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function Gd(a,b,c){var d=void 0===d?{}:d;if(a&&(a.addEventListener||a.attachEvent)){var e=Dd(a,b,c,d);if(!e){e=++Cd.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(k){k=new Bd(k);if(!Pb(k.relatedTarget,function(h){return h==a}))return k.currentTarget=a,k.type=b,c.call(a,k)}:function(k){k=new Bd(k);
k.currentTarget=a;return c.call(a,k)};
g=wd(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),Fd()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);ab[e]=[a,b,c,g,d]}}}
;function Hd(a,b){"function"===typeof a&&(a=wd(a));return window.setTimeout(a,b)}
function Id(a){"function"===typeof a&&(a=wd(a));return window.setInterval(a,250)}
;function Jd(a){var b=[];Za(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];G(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function Kd(a){"?"==a.charAt(0)&&(a=a.substr(1));a=a.split("&");for(var b={},c=0,d=a.length;c<d;c++){var e=a[c].split("=");if(1==e.length&&e[0]||2==e.length)try{var f=decodeURIComponent((e[0]||"").replace(/\+/g," ")),g=decodeURIComponent((e[1]||"").replace(/\+/g," "));f in b?Array.isArray(b[f])?Xa(b[f],g):b[f]=[b[f],g]:b[f]=g}catch(h){if("q"!=e[0]){var k=Error("Error decoding URL component");k.params={key:e[0],value:e[1]};xd(k)}}}return b}
function Ld(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=Kd(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);b=a;a=Ub(e);a?(c=b.indexOf("#"),0>c&&(c=b.length),f=b.indexOf("?"),0>f||f>c?(f=c,e=""):e=b.substring(f+1,c),b=[b.substr(0,f),e,b.substr(c)],c=b[1],b[1]=a?c?c+"&"+a:a:c,a=b[0]+(b[1]?"?"+b[1]:"")+b[2]):a=b;return a+d}
;var Md={};function Nd(a){return Md[a]||(Md[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var Od={},Pd=[],cd=new M,Qd={};function Rd(){for(var a=u(Pd),b=a.next();!b.done;b=a.next())b=b.value,b()}
function Sd(a,b){b||(b=document);var c=Wa(b.getElementsByTagName("yt:"+a));var d="yt-"+a;var e=b||document;d=e.querySelectorAll&&e.querySelector?e.querySelectorAll("."+d):Nb(d,b);d=Wa(d);return Ua(c,d)}
function P(a,b){var c;"yt:"==a.tagName.toLowerCase().substr(0,3)?c=a.getAttribute(b):c=a?a.dataset?a.dataset[Nd(b)]:a.getAttribute("data-"+b):null;return c}
function Td(a,b){cd.R.apply(cd,arguments)}
;function Ud(a){this.g=a||{};this.h=this.f=!1;a=document.getElementById("www-widgetapi-script");if(this.f=!!("https:"==document.location.protocol||a&&0==a.src.indexOf("https:"))){a=[this.g,window.YTConfig||{}];for(var b=0;b<a.length;b++)a[b].host&&(a[b].host=a[b].host.replace("http://","https://"))}}
function R(a,b){for(var c=[a.g,window.YTConfig||{}],d=0;d<c.length;d++){var e=c[d][b];if(void 0!=e)return e}return null}
function Vd(a,b,c){Wd||(Wd={},Gd(window,"message",Oa(a.i,a)));Wd[c]=b}
Ud.prototype.i=function(a){if(a.origin==R(this,"host")||a.origin==R(this,"host").replace(/^http:/,"https:")){try{var b=JSON.parse(a.data)}catch(c){return}this.h=!0;this.f||0!=a.origin.indexOf("https:")||(this.f=!0);if(a=Wd[b.id])a.s=!0,a.s&&(G(a.m,a.S,a),a.m.length=0),a.ba(b)}};
var Wd=null;function S(a){a=Xd(a);return"string"===typeof a&&"false"===a?!1:!!a}
function Yd(a,b){var c=Xd(a);return void 0===c&&void 0!==b?b:Number(c||0)}
function Xd(a){var b=O("EXPERIMENTS_FORCED_FLAGS",{});return void 0!==b[a]?b[a]:O("EXPERIMENT_FLAGS",{})[a]}
;function Zd(){}
function $d(a,b){return ae(a,0,b)}
;function be(){}
na(be,Zd);function ae(a,b,c){isNaN(c)&&(c=void 0);var d=B("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):Hd(a,c||0)}
be.prototype.start=function(){var a=B("yt.scheduler.instance.start");a&&a()};
be.f=void 0;be.g=function(){be.f||(be.f=new be)};
be.g();var ce=A.ytPubsubPubsubInstance||new M,de=A.ytPubsubPubsubSubscribedKeys||{},ee=A.ytPubsubPubsubTopicToKeys||{},fe=A.ytPubsubPubsubIsSynchronous||{};M.prototype.subscribe=M.prototype.subscribe;M.prototype.unsubscribeByKey=M.prototype.J;M.prototype.publish=M.prototype.R;M.prototype.clear=M.prototype.clear;D("ytPubsubPubsubInstance",ce);D("ytPubsubPubsubTopicToKeys",ee);D("ytPubsubPubsubIsSynchronous",fe);D("ytPubsubPubsubSubscribedKeys",de);var T=window,U=T.ytcsi&&T.ytcsi.now?T.ytcsi.now:T.performance&&T.performance.timing&&T.performance.now&&T.performance.timing.navigationStart?function(){return T.performance.timing.navigationStart+T.performance.now()}:function(){return(new Date).getTime()};var ge=Yd("initial_gel_batch_timeout",1E3),he=Math.pow(2,16)-1,ie=null,je=0,ke=void 0,le=0,me=0,ne=0,oe=!0,pe=A.ytLoggingTransportLogPayloadsQueue_||{};D("ytLoggingTransportLogPayloadsQueue_",pe);var qe=A.ytLoggingTransportGELQueue_||new Map;D("ytLoggingTransportGELQueue_",qe);var re=A.ytLoggingTransportTokensToCttTargetIds_||{};D("ytLoggingTransportTokensToCttTargetIds_",re);
function se(){window.clearTimeout(le);window.clearTimeout(me);me=0;ke&&ke.isReady()?(te(qe),"log_event"in pe&&te(Object.entries(pe.log_event)),qe.clear(),delete pe.log_event):ue()}
function ue(){S("web_gel_timeout_cap")&&!me&&(me=Hd(se,6E4));window.clearTimeout(le);var a=O("LOGGING_BATCH_TIMEOUT",Yd("web_gel_debounce_ms",1E4));S("shorten_initial_gel_batch_timeout")&&oe&&(a=ge);le=Hd(se,a)}
function te(a){var b=ke,c=Math.round(U());a=u(a);for(var d=a.next();!d.done;d=a.next()){var e=u(d.value);d=e.next().value;var f=e.next().value;e=cb({context:ve(b.f||we())});e.events=f;(f=re[d])&&xe(e,d,f);delete re[d];ye(e,c);ze(b,"log_event",e,{retry:!0,onSuccess:function(){je=Math.round(U()-c)}});
oe=!1}}
function ye(a,b){a.requestTimeMs=String(b);S("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);var c=O("EVENT_ID",void 0);if(c){var d=O("BATCH_CLIENT_COUNTER",void 0)||0;!d&&S("web_client_counter_random_seed")&&(d=Math.floor(Math.random()*he/2));d++;d>he&&(d=1);td("BATCH_CLIENT_COUNTER",d);c={serializedEventId:c,clientCounter:String(d)};a.serializedClientEventId=c;ie&&je&&S("log_gel_rtt_web")&&(a.previousBatchInfo={serializedClientEventId:ie,roundtripMs:String(je)});ie=c;je=0}}
function xe(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
;var Ae=A.ytLoggingGelSequenceIdObj_||{};D("ytLoggingGelSequenceIdObj_",Ae);function Be(a){var b=Ce;a=void 0===a?B("yt.ads.biscotti.lastId_")||"":a;b=Object.assign(De(b),Ee(b));b.ca_type="image";a&&(b.bid=a);return b}
function De(a){var b={};b.dt=bc;b.flash="0";a:{try{var c=a.f.top.location.href}catch(f){a=2;break a}a=c?c===a.g.location.href?0:1:2}b=(b.frm=a,b);b.u_tz=-(new Date).getTimezoneOffset();var d=void 0===d?I:d;try{var e=d.history.length}catch(f){e=0}b.u_his=e;b.u_java=!!I.navigator&&"unknown"!==typeof I.navigator.javaEnabled&&!!I.navigator.javaEnabled&&I.navigator.javaEnabled();I.screen&&(b.u_h=I.screen.height,b.u_w=I.screen.width,b.u_ah=I.screen.availHeight,b.u_aw=I.screen.availWidth,b.u_cd=I.screen.colorDepth);
I.navigator&&I.navigator.plugins&&(b.u_nplug=I.navigator.plugins.length);I.navigator&&I.navigator.mimeTypes&&(b.u_nmime=I.navigator.mimeTypes.length);return b}
function Ee(a){var b=a.f;try{var c=b.screenX;var d=b.screenY}catch(n){}try{var e=b.outerWidth;var f=b.outerHeight}catch(n){}try{var g=b.innerWidth;var k=b.innerHeight}catch(n){}b=[b.screenLeft,b.screenTop,c,d,b.screen?b.screen.availWidth:void 0,b.screen?b.screen.availTop:void 0,e,f,g,k];c=a.f.top;try{var h=(c||window).document,l="CSS1Compat"==h.compatMode?h.documentElement:h.body;var m=(new Mb(l.clientWidth,l.clientHeight)).round()}catch(n){m=new Mb(-12245933,-12245933)}h=m;m={};l=new hc;A.SVGElement&&
A.document.createElementNS&&l.set(0);c=$b();c["allow-top-navigation-by-user-activation"]&&l.set(1);c["allow-popups-to-escape-sandbox"]&&l.set(2);A.crypto&&A.crypto.subtle&&l.set(3);A.TextDecoder&&A.TextEncoder&&l.set(4);l=ic(l);m.bc=l;m.bih=h.height;m.biw=h.width;m.brdim=b.join();a=a.g;return m.vis={visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[a.visibilityState||a.webkitVisibilityState||a.mozVisibilityState||""]||0,m.wgl=!!I.WebGLRenderingContext,m}
var Ce=new function(){var a=window.document;this.f=window;this.g=a};
D("yt.ads_.signals_.getAdSignalsString",function(a){return Jd(Be(a))});C();var Fe="XMLHttpRequest"in A?function(){return new XMLHttpRequest}:null;
function Ge(){if(!Fe)return null;var a=Fe();return"open"in a?a:null}
;var He={Authorization:"AUTHORIZATION","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL","X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"},Ie="app debugcss debugjs expflag force_ad_params force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address".split(" "),
Je=!1;
function Ke(a,b){b=void 0===b?{}:b;if(!c)var c=window.location.href;var d=a.match(Qb)[1]||null,e=J(a);d&&e?(d=c,c=a.match(Qb),d=d.match(Qb),c=c[3]==d[3]&&c[1]==d[1]&&c[4]==d[4]):c=e?J(c)==e&&(Number(c.match(Qb)[4]||null)||null)==(Number(a.match(Qb)[4]||null)||null):!0;d=S("web_ajax_ignore_global_headers_if_set");for(var f in He)e=O(He[f]),!e||!c&&J(a)||d&&void 0!==b[f]||(b[f]=e);if(c||!J(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());(c||!J(a))&&(f="undefined"!=typeof Intl?(new Intl.DateTimeFormat).resolvedOptions().timeZone:
null)&&(b["X-YouTube-Time-Zone"]=f);if(c||!J(a))b["X-YouTube-Ad-Signals"]=Jd(Be(void 0));return b}
function Le(a){var b=window.location.search,c=J(a),d=Rb(a.match(Qb)[5]||null);d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=Kd(b),f={};G(Ie,function(g){e[g]&&(f[g]=e[g])});
return Ld(a,f||{},!1)}
function Me(a,b){if(window.fetch&&"XML"!=b.format){var c={method:b.method||"GET",credentials:"same-origin"};b.headers&&(c.headers=b.headers);a=Ne(a,b);var d=Oe(a,b);d&&(c.body=d);b.withCredentials&&(c.credentials="include");var e=!1,f;fetch(a,c).then(function(g){if(!e){e=!0;f&&window.clearTimeout(f);var k=g.ok,h=function(l){l=l||{};var m=b.context||A;k?b.onSuccess&&b.onSuccess.call(m,l,g):b.onError&&b.onError.call(m,l,g);b.O&&b.O.call(m,l,g)};
"JSON"==(b.format||"JSON")&&(k||400<=g.status&&500>g.status)?g.json().then(h,function(){h(null)}):h(null)}});
b.Y&&0<b.timeout&&(f=Hd(function(){e||(e=!0,window.clearTimeout(f),b.Y.call(b.context||A))},b.timeout))}else Pe(a,b)}
function Pe(a,b){var c=b.format||"JSON";a=Ne(a,b);var d=Oe(a,b),e=!1,f=Qe(a,function(h){if(!e){e=!0;k&&window.clearTimeout(k);a:switch(h&&"status"in h?h.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:var l=!0;break a;default:l=!1}var m=null,n=400<=h.status&&500>h.status,r=500<=h.status&&600>h.status;if(l||n||r)m=Re(a,c,h,b.Fa);if(l)a:if(h&&204==h.status)l=!0;else{switch(c){case "XML":l=0==parseInt(m&&m.return_code,10);break a;case "RAW":l=!0;break a}l=!!m}m=m||
{};n=b.context||A;l?b.onSuccess&&b.onSuccess.call(n,h,m):b.onError&&b.onError.call(n,h,m);b.O&&b.O.call(n,h,m)}},b.method,d,b.headers,b.responseType,b.withCredentials);
if(b.H&&0<b.timeout){var g=b.H;var k=Hd(function(){e||(e=!0,f.abort(),window.clearTimeout(k),g.call(b.context||A,f))},b.timeout)}}
function Ne(a,b){b.Ja&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=O("XSRF_FIELD_NAME",void 0),d=b.qa;d&&(d[c]&&delete d[c],a=Ld(a,d||{},!0));return a}
function Oe(a,b){var c=O("XSRF_FIELD_NAME",void 0),d=O("XSRF_TOKEN",void 0),e=b.postBody||"",f=b.u,g=O("XSRF_FIELD_NAME",void 0),k;b.headers&&(k=b.headers["Content-Type"]);b.Ia||J(a)&&!b.withCredentials&&J(a)!=document.location.hostname||"POST"!=b.method||k&&"application/x-www-form-urlencoded"!=k||b.u&&b.u[g]||(f||(f={}),f[c]=d);f&&"string"===typeof e&&(e=Kd(e),eb(e,f),e=b.aa&&"JSON"==b.aa?JSON.stringify(e):Ub(e));if(!(c=e)&&(c=f)){a:{for(var h in f){f=!1;break a}f=!0}c=!f}!Je&&c&&"POST"!=b.method&&
(Je=!0,xd(Error("AJAX request with postData should use POST")));return e}
function Re(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,yd(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?Se(a):null)e={},G(a.getElementsByTagName("*"),function(g){e[g.tagName]=Te(g)})}d&&Ue(e);
return e}
function Ue(a){if(Ia(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d=a[b],e=new rb;if(void 0===fb){var f=null;var g=A.trustedTypes;if(g&&g.createPolicy){try{f=g.createPolicy("goog#html",{createHTML:Pa,createScript:Pa,createScriptURL:Pa})}catch(k){A.console&&A.console.error(k.message)}fb=f}else fb=f}(f=fb)&&f.createHTML(d);a[c]=e}else Ue(a[b])}}
function Se(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function Te(a){var b="";G(a.childNodes,function(c){b+=c.nodeValue});
return b}
function Qe(a,b,c,d,e,f,g){function k(){4==(h&&"readyState"in h?h.readyState:0)&&b&&wd(b)(h)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var h=Ge();if(!h)return null;"onloadend"in h?h.addEventListener("loadend",k,!1):h.onreadystatechange=k;S("debug_forward_web_query_parameters")&&(a=Le(a));h.open(c,a,!0);f&&(h.responseType=f);g&&(h.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=Ke(a,e))for(var l in e)h.setRequestHeader(l,e[l]),"content-type"==l.toLowerCase()&&(c=!1);c&&h.setRequestHeader("Content-Type","application/x-www-form-urlencoded");h.send(d);
return h}
;function Ve(){for(var a={},b=u(Object.entries(Kd(O("DEVICE","")))),c=b.next();!c.done;c=b.next()){var d=u(c.value);c=d.next().value;d=d.next().value;"cbrand"===c?a.deviceMake=d:"cmodel"===c?a.deviceModel=d:"cbr"===c?a.browserName=d:"cbrver"===c?a.browserVersion=d:"cos"===c?a.osName=d:"cosver"===c?a.osVersion=d:"cplatform"===c&&(a.platform=d)}return a}
;function We(){return"INNERTUBE_API_KEY"in N&&"INNERTUBE_API_VERSION"in N}
function we(){return{innertubeApiKey:O("INNERTUBE_API_KEY",void 0),innertubeApiVersion:O("INNERTUBE_API_VERSION",void 0),ia:O("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),ja:O("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),innertubeContextClientVersion:O("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0),la:O("INNERTUBE_CONTEXT_HL",void 0),ka:O("INNERTUBE_CONTEXT_GL",void 0),ma:O("INNERTUBE_HOST_OVERRIDE",void 0)||"",oa:!!O("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),na:!!O("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1)}}
function ve(a){a={client:{hl:a.la,gl:a.ka,clientName:a.ja,clientVersion:a.innertubeContextClientVersion,configInfo:a.ia}};var b=window.devicePixelRatio;b&&1!=b&&(a.client.screenDensityFloat=String(b));b=O("EXPERIMENTS_TOKEN","");""!==b&&(a.client.experimentsToken=b);b=[];var c=O("EXPERIMENTS_FORCED_FLAGS",{});for(d in c)b.push({key:d,value:String(c[d])});var d=O("EXPERIMENT_FLAGS",{});for(var e in d)e.startsWith("force_")&&void 0===c[e]&&b.push({key:e,value:String(d[e])});0<b.length&&(a.request={internalExperimentFlags:b});
O("DELEGATED_SESSION_ID")&&!S("pageid_as_header_web")&&(a.user={onBehalfOfUser:O("DELEGATED_SESSION_ID")});a.client=Object.assign(a.client,Ve());return a}
function Xe(a,b,c){c=void 0===c?{}:c;var d={"X-Goog-Visitor-Id":c.visitorData||O("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;(b=c.Ea||O("AUTHORIZATION"))||(a?b="Bearer "+B("gapi.auth.getToken")().Da:b=gc([]));b&&(d.Authorization=b,d["X-Goog-AuthUser"]=O("SESSION_INDEX",0),S("pageid_as_header_web")&&(d["X-Goog-PageId"]=O("DELEGATED_SESSION_ID")));return d}
;function Ye(a){a=Object.assign({},a);delete a.Authorization;var b=gc();if(b){var c=new yc;c.update(O("INNERTUBE_API_KEY",void 0));c.update(b);b=c.digest();c=3;Ga(b);void 0===c&&(c=0);if(!Hb){Hb={};for(var d="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),e=["+/=","+/","-_=","-_.","-_"],f=0;5>f;f++){var g=d.concat(e[f].split(""));Gb[f]=g;for(var k=0;k<g.length;k++){var h=g[k];void 0===Hb[h]&&(Hb[h]=k)}}}c=Gb[c];d=[];for(e=0;e<b.length;e+=3){var l=b[e],m=(f=e+1<b.length)?
b[e+1]:0;h=(g=e+2<b.length)?b[e+2]:0;k=l>>2;l=(l&3)<<4|m>>4;m=(m&15)<<2|h>>6;h&=63;g||(h=64,f||(m=64));d.push(c[k],c[l],c[m]||"",c[h]||"")}a.hash=d.join("")}return a}
function Ze(a){a=Ye(a);var b=new yc;b.update(JSON.stringify(a,Object.keys(a).sort()));a=b.digest();b="";for(var c=0;c<a.length;c++)b+="0123456789ABCDEF".charAt(Math.floor(a[c]/16))+"0123456789ABCDEF".charAt(a[c]%16);return b}
;function $e(){var a=new md;(a=a.isAvailable()?new sd(a,"yt.innertube"):null)||(a=new nd("yt.innertube"),a=a.isAvailable()?a:null);this.f=a?new id(a):null;this.g=document.domain||window.location.hostname}
$e.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.f)try{this.f.set(a,b,C()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape(Jc(b))}catch(f){return}else e=escape(b);b=this.g;Lb.set(""+a,e,{V:c,path:"/",domain:void 0===b?"youtube.com":b,secure:!1})};
$e.prototype.get=function(a,b){var c=void 0,d=!this.f;if(!d)try{c=this.f.get(a)}catch(e){d=!0}if(d&&(c=Lb.get(""+a,void 0))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
$e.prototype.remove=function(a){this.f&&this.f.remove(a);var b=this.g;Lb.remove(""+a,"/",void 0===b?"youtube.com":b)};var af;function bf(){af||(af=new $e);return af}
function cf(a,b,c,d){if(d)return null;d=bf().get("nextId",!0)||1;var e=bf().get("requests",!0)||{};e[d]={method:a,request:b,authState:Ye(c),requestTime:Math.round(U())};bf().set("nextId",d+1,86400,!0);bf().set("requests",e,86400,!0);return d}
function df(a){var b=bf().get("requests",!0)||{};delete b[a];bf().set("requests",b,86400,!0)}
function ef(a){var b=bf().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(U())-d.requestTime)){var e=d.authState,f=Ye(Xe(!1));bb(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(U())),ze(a,d.method,e,{}));delete b[c]}}bf().set("requests",b,86400,!0)}}
;function ff(){}
;function gf(){var a=Error.call(this,"Transaction was aborted");this.message=a.message;"stack"in a&&(this.stack=a.stack);Object.setPrototypeOf(this,gf.prototype)}
na(gf,Error);function hf(a){return(a instanceof DOMException||a instanceof DOMError)&&"VersionError"===a.name}
;function V(a){return new L(function(b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){a.removeEventListener("success",e);a.removeEventListener("error",d)}
a.addEventListener("success",e);a.addEventListener("error",d)})}
;function jf(a){this.f=a}
q=jf.prototype;q.add=function(a,b,c){return W(X(this,[a],"readwrite"),a).add(b,c)};
q.clear=function(a){return W(X(this,[a],"readwrite"),a).clear()};
q.close=function(){this.f.close()};
q.count=function(a,b){return W(X(this,[a]),a).count(b)};
function kf(a,b,c){a=a.f.createObjectStore(b,c);return new lf(a)}
q["delete"]=function(a,b){return W(X(this,[a],"readwrite"),a)["delete"](b)};
q.get=function(a,b){return W(X(this,[a]),a).get(b)};
function X(a,b,c){a=a.f.transaction(b,c);return new mf(a)}
function lf(a){this.f=a}
q=lf.prototype;q.add=function(a,b){return V(this.f.add(a,b))};
q.clear=function(){return V(this.f.clear()).then(function(){})};
q.count=function(a){return V(this.f.count(a))};
q["delete"]=function(a){return V(this.f["delete"](a))};
q.get=function(a){return V(this.f.get(a))};
q.index=function(a){return new nf(this.f.index(a))};
q.getName=function(){return this.f.name};
function mf(a){var b=this;this.f=a;this.g=new Map;this.done=new L(function(c,d){b.f.addEventListener("complete",function(){c()});
b.f.addEventListener("error",function(){d(b.f.error)});
b.f.addEventListener("abort",function(){d(new gf)})})}
mf.prototype.abort=function(){this.f.abort();return this.done};
function W(a,b){var c=a.f.objectStore(b),d=a.g.get(c);d||(d=new lf(c),a.g.set(c,d));return d}
function nf(a){this.f=a}
nf.prototype.count=function(a){return V(this.f.count(a))};
nf.prototype.get=function(a){return V(this.f.get(a))};
function of(a,b){this.request=a;this.f=b}
function pf(a){return V(a).then(function(b){return null===b?null:new of(a,b)})}
of.prototype["delete"]=function(){return V(this.f["delete"]()).then(function(){})};
of.prototype.update=function(a){return V(this.f.update(a))};function qf(a,b,c){function d(){m||(m=new jf(f.result));return m}
var e=mf;var f=void 0!==b?self.indexedDB.open(a,b):self.indexedDB.open(a);var g=c.f,k=c.blocking,h=c.g,l=c.upgrade,m;l&&f.addEventListener("upgradeneeded",function(n){if(null===n.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===f.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");var r=d(),p=new e(f.transaction);l(r,n.oldVersion,n.newVersion,p)});
g&&f.addEventListener("blocked",function(){g()});
return V(f).then(function(n){k&&n.addEventListener("versionchange",function(){k(d())});
h&&n.addEventListener("close",function(){h()});
return d()})}
function rf(a,b,c){c=void 0===c?{}:c;return qf(a,b,c)}
;var sf;function tf(){return K(this,function b(){var c,d,e;return x(b,function(f){switch(f.f){case 1:if(!self.indexedDB)return f["return"](!1);sa(f);e=!1;return w(f,rf("yt-idb-test-do-not-use",void 0,{blocking:function(){e=!0;c&&(c.close(),c=void 0)}}),5);
case 5:return c=f.g,w(f,rf("yt-idb-test-do-not-use",c.f.version+1),6);case 6:return d=f.g,d.close(),d=void 0,f["return"](e);case 3:ua(f);if(c)try{c.close()}catch(g){}if(d)try{d.close()}catch(g){}va(f);break;case 2:return ta(f),f["return"](!1)}})})}
function uf(){return void 0!==sf?Oc(sf):new L(function(a){tf().then(function(b){sf=b;a(b)})})}
;var vf;function wf(){function a(b){b.close();vf=void 0}
vf||(vf=Rc(rf("YtIdbMeta",1,{blocking:a,upgrade:function(b,c){1>c&&kf(b,"databases",{keyPath:"actualName"})}}),function(b){return hf(b)?rf("YtIdbMeta",void 0,{blocking:a}):Pc(b)}));
return vf}
function xf(){var a={K:"LogsDataBase",publicName:"LogsDataBase",ea:void 0,da:!1};return wf().then(function(b){return b.get("databases",a.K).then(function(c){if(c?a.K!==c.K||a.publicName!==c.publicName||a.ea!==c.ea||a.da!==c.da:1)return c=W(X(b,["databases"],"readwrite"),"databases"),V(c.f.put(a,void 0))})})}
function yf(){return wf().then(function(a){return a["delete"]("databases","LogsDataBase")})}
;function zf(a,b){b=void 0===b?{}:b;return Rc(xf().then(function(){return rf("LogsDataBase",a,b)}),function(c){return Rc(yf(),function(){}).then(function(){return Pc(c)})})}
;var Af;function Bf(){return K(this,function b(){return x(b,function(c){if(!Af)try{Af=zf(1,{upgrade:function(d,e){1>e&&(kf(d,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0}).f.createIndex("newRequest",["status","authHash","timestamp"],{unique:!1}),kf(d,"sapisid"))}})}catch(d){if(!hf(d))return xd(d),c["return"](Promise.reject(d));
Af=zf()}return c["return"](Af)})})}
function Cf(a){return K(this,function c(){var d,e,f,g,k;return x(c,function(h){switch(h.f){case 1:return w(h,Bf(),2);case 2:return d=h.g,e=W(X(d,["LogsRequestsStore"],"readwrite"),"LogsRequestsStore"),w(h,Df(),3);case 3:return f=h.g,g=Object.assign(Object.assign({},a),{options:JSON.parse(JSON.stringify(a.options)),authHash:f}),w(h,e.add(g),4);case 4:return k=h.g,h["return"](k)}})})}
function Ef(){return K(this,function b(){var c,d,e,f,g,k,h,l;return x(b,function(m){switch(m.f){case 1:return w(m,Df(),2);case 2:return c=m.g,d=["NEW",c,0],e=["NEW",c,U()],f=IDBKeyRange.bound(d,e),w(m,Bf(),3);case 3:g=m.g;k=X(g,["LogsRequestsStore"],"readwrite");var n=W(k,"LogsRequestsStore").index("newRequest").f.openCursor(f,"prev");n=pf(n);return w(m,n,4);case 4:h=m.g;l=void 0;if(null===h||void 0===h||!h.f.value){m.v(5);break}l=h.f.value;l.status="QUEUED";return w(m,h.update(l),5);case 5:return m["return"](l)}})})}
function Ff(a){return K(this,function c(){var d,e,f;return x(c,function(g){switch(g.f){case 1:return w(g,Bf(),2);case 2:return d=g.g,e=W(X(d,["LogsRequestsStore"],"readwrite"),"LogsRequestsStore"),w(g,e.get(a),3);case 3:return f=g.g,f.status="QUEUED",w(g,V(e.f.put(f,void 0)),4);case 4:return g["return"](f)}})})}
function Gf(a){return K(this,function c(){var d,e,f;return x(c,function(g){switch(g.f){case 1:return w(g,Bf(),2);case 2:return d=g.g,e=W(X(d,["LogsRequestsStore"],"readwrite"),"LogsRequestsStore"),w(g,e.get(a),3);case 3:return f=g.g,f.status="NEW",f.sendCount+=1,w(g,V(e.f.put(f,void 0)),4);case 4:return g["return"](f)}})})}
function Hf(){return K(this,function b(){var c,d;return x(b,function(e){if(1==e.f)return w(e,Bf(),2);if(3!=e.f)return c=e.g,w(e,c.count("LogsRequestsStore"),3);d=e.g;return e["return"](!d)})})}
function If(a){return K(this,function c(){var d;return x(c,function(e){if(1==e.f)return w(e,Bf(),2);d=e.g;return e["return"](d["delete"]("LogsRequestsStore",a))})})}
function Df(){return K(this,function b(){var c;return x(b,function(d){if(1==d.f){ff.f||(ff.f=new ff);var e={};var f=gc([]);f&&(e.Authorization=f,e["X-Goog-AuthUser"]=O("SESSION_INDEX",0),"INNERTUBE_HOST_OVERRIDE"in N||(e["X-Origin"]=window.location.origin),S("pageid_as_header_web")&&"DELEGATED_SESSION_ID"in N&&(e["X-Goog-PageId"]=O("DELEGATED_SESSION_ID")));e=Oc(e);return w(d,e,2)}c=d.g;return d["return"](Ze(c))})})}
;var Jf=Yd("network_polling_interval",3E4);function Kf(){this.i=0;this.f=window.navigator.onLine;Lf(this);Mf(this)}
function Nf(){Kf.f||(Kf.f=new Kf);return Kf.f}
function Of(a){var b=Pf,c=Qf;Rf(a);(new L(function(d){a.g=d})).then(function(){b();
c&&(a.h=c)})}
function Mf(a){window.addEventListener("online",function(){a.f=!0;a.g&&a.g()})}
function Lf(a){window.addEventListener("offline",function(){a.f=!1;a.h&&a.h()})}
function Rf(a){a.i||(Sf(a),window.navigator.onLine&&a.g&&a.g())}
function Sf(a){a.i=$d(function(){window.navigator.onLine?(!1===a.f&&xd(Error("NetworkStatusManager missed online event.")),a.f=!0,a.g&&a.g()):(!0===a.f&&xd(Error("NetworkStatusManager missed offline event.")),a.f=!1,a.h&&a.h());Sf(a)},Jf)}
;var Tf=Yd("networkless_throttle_timeout")||100,Uf=Yd("networkless_retry_attempts")||1,Vf=0;function Wf(a,b){uf().then(function(c){if(c&&!S("networkless_bypass_write")){var d={url:a,options:b,timestamp:U(),status:"NEW",sendCount:0};Cf(d).then(function(e){d.id=e;e=Nf();e.f?Xf(d):Of(e)})["catch"](function(){Xf(d);
xd(Error("Networkless Logging: Log request setting to indexedDB failed."))})}else Pe(a,b)})}
function Pf(){Vf||(Vf=ae(function(){Xf();Vf=0;Pf()},1,Tf))}
function Qf(){var a=Vf;if(!isNaN(a)){var b=B("yt.scheduler.instance.cancelJob");b?b(a):window.clearTimeout(a)}Vf=0}
function Xf(a){K(this,function c(){var d=this,e,f,g,k;return x(c,function(h){switch(h.f){case 1:e=d;if(!a)return w(h,Ef(),6);if(!a.id){h.v(3);break}return w(h,Ff(a.id),5);case 5:a=h.g;h.v(3);break;case 6:if(a=h.g){h.v(3);break}return w(h,Hf(),8);case 8:return(f=h.g)&&Qf(),h["return"]();case 3:if(Yf(a))g=a.options.onError?a.options.onError:function(){},k=a.options.onSuccess?a.options.onSuccess:function(){},a.options.onError=function(l,m){return K(e,function r(){return x(r,function(p){if(1==p.f)return a&&
a.id?a.sendCount<Uf?w(p,Gf(a.id),6):w(p,If(a.id),2):p.v(2);
2!=p.f&&(Vf||Of(Nf()),g(l,m));g(l,m);p.f=0})})},a.options.onSuccess=function(l,m){return K(e,function r(){return x(r,function(p){if(1==p.f)return a&&a.id?w(p,If(a.id),2):p.v(2);
k(l,m);p.f=0})})},Pe(a.url,a.options);
else if(yd(Error("Networkless Logging: Stored logs request expired age limit")),a.id)return w(h,If(a.id),0);h.v(0)}})})}
function Yf(a){a=a.timestamp;return 2592E6<=U()-a?!1:!0}
;function Zf(a,b){for(var c=[],d=1;d<arguments.length;++d)c[d-1]=arguments[d];d=Error.call(this,a);this.message=d.message;"stack"in d&&(this.stack=d.stack);this.args=[].concat(c instanceof Array?c:fa(u(c)))}
na(Zf,Error);function $f(a){var b=this;this.f=null;a?this.f=a:We()&&(this.f=we());$d(function(){ef(b)},5E3)}
$f.prototype.isReady=function(){!this.f&&We()&&(this.f=we());return!!this.f};
function ze(a,b,c,d){!O("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&yd(new Zf("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady())throw b=new Zf("innertube xhrclient not ready",b,c,d),xd(b),b.f=0,b;var e={headers:{"Content-Type":"application/json"},method:"POST",u:c,aa:"JSON",H:function(){d.H()},
Y:d.H,onSuccess:function(p,v){if(d.onSuccess)d.onSuccess(v)},
X:function(p){if(d.onSuccess)d.onSuccess(p)},
onError:function(p,v){if(d.onError)d.onError(v)},
Ka:function(p){if(d.onError)d.onError(p)},
timeout:d.timeout,withCredentials:!0},f="",g=a.f.ma;g&&(f=g);g=a.f.oa||!1;var k=Xe(g,f,d);Object.assign(e.headers,k);e.headers.Authorization&&!f&&(e.headers["x-origin"]=window.location.origin);var h="/youtubei/"+a.f.innertubeApiVersion+"/"+b,l={alt:"json"};a.f.na&&e.headers.Authorization||(l.key=a.f.innertubeApiKey);h=Ld(""+f+h,l||{},!0);var m;if(d.retry&&S("retry_web_logging_batches")&&"www.youtube-nocookie.com"!=f&&(m=cf(b,c,k,g))){var n=e.onSuccess,r=e.X;e.onSuccess=function(p,v){df(m);n(p,v)};
c.X=function(p,v){df(m);r(p,v)}}try{S("use_fetch_for_op_xhr")?Me(h,e):S("networkless_logging")&&d.retry?(e.method="POST",Wf(h,e)):(e.method="POST",e.u||(e.u={}),Pe(h,e))}catch(p){if("InvalidAccessError"==p.name)m&&(df(m),m=0),yd(Error("An extension is blocking network request."));
else throw p;}m&&$d(function(){ef(a)},5E3)}
;var ag=[{W:function(a){return"Cannot read property '"+a.key+"'"},
P:{TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,
groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]}],Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}]}},{W:function(a){return"Cannot call '"+a.key+"'"},
P:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,
groups:["key"]}]}}];var bg=new Set,cg=0;function dg(a,b,c,d){c+="."+a;a=String(JSON.stringify(b)).substr(0,500);d[c]=a;return c.length+a.length}
;function Y(a,b,c){this.l=this.f=this.g=null;this.j=Ja(this);this.h=0;this.s=!1;this.m=[];this.i=null;this.A=c;this.F={};c=document;if(a="string"===typeof a?c.getElementById(a):a)if(c="iframe"==a.tagName.toLowerCase(),b.host||(b.host=c?Sb(a.src):"https://www.youtube.com"),this.g=new Ud(b),c||(b=eg(this,a),this.l=a,(c=a.parentNode)&&c.replaceChild(b,a),a=b),this.f=a,this.f.id||(this.f.id="widget"+Ja(this.f)),Od[this.f.id]=this,window.postMessage){this.i=new M;fg(this);b=R(this.g,"events");for(var d in b)b.hasOwnProperty(d)&&
this.addEventListener(d,b[d]);for(var e in Qd)gg(this,e)}}
q=Y.prototype;q.setSize=function(a,b){this.f.width=a;this.f.height=b;return this};
q.pa=function(){return this.f};
q.ba=function(a){this.I(a.event,a)};
q.addEventListener=function(a,b){var c=b;"string"==typeof b&&(c=function(){window[b].apply(window,arguments)});
if(!c)return this;this.i.subscribe(a,c);hg(this,a);return this};
function gg(a,b){var c=b.split(".");if(2==c.length){var d=c[1];a.A==c[0]&&hg(a,d)}}
q.destroy=function(){this.f.id&&(Od[this.f.id]=null);var a=this.i;a&&"function"==typeof a.dispose&&a.dispose();if(this.l){a=this.f;var b=a.parentNode;b&&b.replaceChild(this.l,a)}else(a=this.f)&&a.parentNode&&a.parentNode.removeChild(a);Wd&&(Wd[this.j]=null);this.g=null;a=this.f;for(var c in ab)ab[c][0]==a&&Ed(c);this.l=this.f=null};
q.L=function(){return{}};
function ig(a,b,c){c=c||[];c=Array.prototype.slice.call(c);b={event:"command",func:b,args:c};a.s?a.S(b):a.m.push(b)}
q.I=function(a,b){if(!this.i.h){var c={target:this,data:b};this.i.R(a,c);Td(this.A+"."+a,c)}};
function eg(a,b){for(var c=document.createElement("iframe"),d=b.attributes,e=0,f=d.length;e<f;e++){var g=d[e].value;null!=g&&""!=g&&"null"!=g&&c.setAttribute(d[e].name,g)}c.setAttribute("frameBorder",0);c.setAttribute("allowfullscreen",1);c.setAttribute("allow","accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture");c.setAttribute("title","YouTube "+R(a.g,"title"));(d=R(a.g,"width"))&&c.setAttribute("width",d);(d=R(a.g,"height"))&&c.setAttribute("height",d);var k=a.L();k.enablejsapi=
window.postMessage?1:0;window.location.host&&(k.origin=window.location.protocol+"//"+window.location.host);k.widgetid=a.j;window.location.href&&G(["debugjs","debugcss"],function(h){var l=window.location.href;var m=l.search(Vb);b:{var n=0;for(var r=h.length;0<=(n=l.indexOf(h,n))&&n<m;){var p=l.charCodeAt(n-1);if(38==p||63==p)if(p=l.charCodeAt(n+r),!p||61==p||38==p||35==p)break b;n+=r+1}n=-1}if(0>n)l=null;else{r=l.indexOf("&",n);if(0>r||r>m)r=m;n+=h.length+1;l=decodeURIComponent(l.substr(n,r-n).replace(/\+/g,
" "))}null!==l&&(k[h]=l)});
c.src=R(a.g,"host")+a.M()+"?"+Ub(k);return c}
q.Z=function(){this.f&&this.f.contentWindow?this.S({event:"listening"}):window.clearInterval(this.h)};
function fg(a){Vd(a.g,a,a.j);a.h=Id(Oa(a.Z,a));Gd(a.f,"load",Oa(function(){window.clearInterval(this.h);this.h=Id(Oa(this.Z,this))},a))}
function hg(a,b){a.F[b]||(a.F[b]=!0,ig(a,"addEventListener",[b]))}
q.S=function(a){a.id=this.j;a.channel="widget";a=Jc(a);var b=this.g;var c=Sb(this.f.src||"");b=0==c.indexOf("https:")?[c]:b.f?[c.replace("http:","https:")]:b.h?[c]:[c,c.replace("http:","https:")];if(this.f.contentWindow)for(c=0;c<b.length;c++)try{this.f.contentWindow.postMessage(a,b[c])}catch(Q){if(Q.name&&"SyntaxError"==Q.name){if(!(Q.message&&0<Q.message.indexOf("target origin ''"))){var d=void 0,e=void 0,f=Q;e=void 0===e?{}:e;e.name=O("INNERTUBE_CONTEXT_CLIENT_NAME",1);e.version=O("INNERTUBE_CONTEXT_CLIENT_VERSION",
void 0);var g=e||{};e="WARNING";e=void 0===e?"ERROR":e;d=void 0===d?!1:d;if(f){if(S("console_log_js_exceptions")){var k=f,h=[];h.push("Name: "+k.name);h.push("Message: "+k.message);k.hasOwnProperty("params")&&h.push("Error Params: "+JSON.stringify(k.params));h.push("File name: "+k.fileName);h.push("Stacktrace: "+k.stack);window.console.log(h.join("\n"),k)}if((window&&window.yterr||d)&&!(5<=cg)&&0!==f.f){var l=void 0,m=Ib(f);d=m.message||"Unknown Error";k=m.name||"UnknownError";h=m.lineNumber||"Not available";
var n=m.fileName||"Not available";m=m.stack||f.g||"Not available";if(f.hasOwnProperty("args")&&f.args&&f.args.length){var r=0;for(l=0;l<f.args.length;l++){var p=f.args[l],v="params."+l;r+=v.length;if(p)if(Array.isArray(p))for(var y=g,F=0;F<p.length&&!(p[F]&&(r+=dg(F,p[F],v,y),500<r));F++);else if("object"===typeof p)for(y in y=void 0,F=g,p){if(p[y]&&(r+=dg(y,p[y],v,F),500<r))break}else g[v]=String(JSON.stringify(p)).substring(0,500),r+=g[v].length;else g[v]=String(JSON.stringify(p)).substring(0,500),
r+=g[v].length;if(500<=r)break}}else if(f.hasOwnProperty("params")&&f.params)if(p=f.params,"object"===typeof f.params)for(l in v=0,p){if(p[l]&&(r="params."+l,y=String(JSON.stringify(p[l])).substr(0,500),g[r]=y,v+=r.length+y.length,500<v))break}else g.params=String(JSON.stringify(p)).substr(0,500);g={message:d,name:k,lineNumber:h,fileName:n,stack:m,params:g};f=Number(f.columnNumber);isNaN(f)||(g.lineNumber=g.lineNumber+":"+f);f=g;g=u(ag);for(d=g.next();!d.done;d=g.next())if(d=d.value,d.P[f.name])for(h=
u(d.P[f.name]),k=h.next();!k.done;k=h.next())if(n=k.value,k=f.message.match(n.regexp)){f.params["error.original"]=k[0];h=n.groups;n={};for(m=0;m<h.length;m++)n[h[m]]=k[m+1],f.params["error."+h[m]]=k[m+1];f.message=d.W(n);break}window.yterr&&"function"===typeof window.yterr&&window.yterr(f);if(!(bg.has(f.message)||0<=f.stack.indexOf("/YouTubeCenter.js")||0<=f.stack.indexOf("/mytube.js"))){if(S("kevlar_gel_error_routing")){g=void 0;k=e;n=f;h={stackTrace:n.stack};n.fileName&&(h.filename=n.fileName);
d=n.lineNumber&&n.lineNumber.split?n.lineNumber.split(":"):[];0!==d.length&&(1!==d.length||isNaN(Number(d[0]))?2!==d.length||isNaN(Number(d[0]))||isNaN(Number(d[1]))||(h.lineNumber=Number(d[0]),h.columnNumber=Number(d[1])):h.lineNumber=Number(d[0]));d={level:"ERROR_LEVEL_UNKNOWN",message:n.message};"ERROR"===k?d.level="ERROR_LEVEL_ERROR":"WARNING"===k&&(d.level="ERROR_LEVEL_WARNNING");k={isObfuscated:!0,browserStackInfo:h};h={pageUrl:window.location.href,kvPairs:[]};if(n=n.params)for(m=u(Object.keys(n)),
l=m.next();!l.done;l=m.next())l=l.value,h.kvPairs.push({key:"client."+l,value:String(n[l])});h={errorMetadata:h,stackTrace:k,logMessage:d};g=void 0===g?{}:g;d=$f;O("ytLoggingEventsDefaultDisabled",!1)&&$f==$f&&(d=null);g=void 0===g?{}:g;k={};k.eventTimeMs=Math.round(g.timestamp||U());k.clientError=h;h=String;g.timestamp?n=-1:(n=B("_lact",window),null==n?n=-1:n=Math.max(C()-n,0));k.context={lastActivityMs:h(n)};S("log_sequence_info_on_gel_web")&&g.ca&&(h=k.context,n=g.ca,Ae[n]=n in Ae?Ae[n]+1:0,h.sequence=
{index:Ae[n],groupKey:n},g.Ha&&delete Ae[g.ca]);g=g.Ga;h="";g&&(h=g,n={},h.videoId?n.videoId=h.videoId:h.playlistId&&(n.playlistId=h.playlistId),re[g.token]=n,h=g.token);g=qe.get(h)||[];qe.set(h,g);g.push(k);d&&(ke=new d);d=Yd("web_logging_max_batch")||100;k=U();g.length>=d?se():10<=k-ne&&(ue(),ne=k);se()}d=f;g=d.params||{};e={qa:{a:"logerror",t:"jserror",type:d.name,msg:d.message.substr(0,250),line:d.lineNumber,level:e,"client.name":g.name},u:{url:O("PAGE_NAME",window.location.href),file:d.fileName},
method:"POST"};g.version&&(e["client.version"]=g.version);if(e.u){d.stack&&(e.u.stack=d.stack);d=u(Object.keys(g));for(k=d.next();!k.done;k=d.next())k=k.value,e.u["client."+k]=g[k];if(g=O("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS",void 0))for(d=u(Object.keys(g)),k=d.next();!k.done;k=d.next())k=k.value,e.u[k]=g[k];g=O("SERVER_NAME",void 0);d=O("SERVER_VERSION",void 0);g&&d&&(e.u["server.name"]=g,e.u["server.version"]=d)}Pe(O("ECATCHER_REPORT_HOST","")+"/error_204",e);bg.add(f.message);cg++}}}}}else throw Q;
}else console&&console.warn&&console.warn("The YouTube player is not attached to the DOM. API calls should be made after the onReady event. See more: https://developers.google.com/youtube/iframe_api_reference#Events")};function jg(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function kg(a){return 0===a.search("get")||0===a.search("is")}
;function Z(a,b){if(!a)throw Error("YouTube player element ID required.");var c={title:"video player",videoId:"",width:640,height:360};if(b)for(var d in b)c[d]=b[d];Y.call(this,a,c,"player");this.C={};this.playerInfo={}}
na(Z,Y);q=Z.prototype;q.M=function(){return"/embed/"+R(this.g,"videoId")};
q.L=function(){var a=R(this.g,"playerVars");if(a){var b={},c;for(c in a)b[c]=a[c];a=b}else a={};window!=window.top&&document.referrer&&(a.widget_referrer=document.referrer.substring(0,256));if(c=R(this.g,"embedConfig")){if(Ia(c))try{c=JSON.stringify(c)}catch(d){console.error("Invalid embed config JSON",d)}a.embed_config=c}return a};
q.ba=function(a){var b=a.event;a=a.info;switch(b){case "apiInfoDelivery":if(Ia(a))for(var c in a)this.C[c]=a[c];break;case "infoDelivery":lg(this,a);break;case "initialDelivery":window.clearInterval(this.h);this.playerInfo={};this.C={};mg(this,a.apiInterface);lg(this,a);break;default:this.I(b,a)}};
function lg(a,b){if(Ia(b))for(var c in b)a.playerInfo[c]=b[c]}
function mg(a,b){G(b,function(c){this[c]||("getCurrentTime"==c?this[c]=function(){var d=this.playerInfo.currentTime;if(1==this.playerInfo.playerState){var e=(C()/1E3-this.playerInfo.currentTimeLastUpdated_)*this.playerInfo.playbackRate;0<e&&(d+=Math.min(e,1))}return d}:jg(c)?this[c]=function(){this.playerInfo={};
this.C={};ig(this,c,arguments);return this}:kg(c)?this[c]=function(){var d=0;
0===c.search("get")?d=3:0===c.search("is")&&(d=2);return this.playerInfo[c.charAt(d).toLowerCase()+c.substr(d+1)]}:this[c]=function(){ig(this,c,arguments);
return this})},a)}
q.getVideoEmbedCode=function(){var a=parseInt(R(this.g,"width"),10),b=parseInt(R(this.g,"height"),10),c=R(this.g,"host")+this.M();nb.test(c)&&(-1!=c.indexOf("&")&&(c=c.replace(hb,"&amp;")),-1!=c.indexOf("<")&&(c=c.replace(ib,"&lt;")),-1!=c.indexOf(">")&&(c=c.replace(jb,"&gt;")),-1!=c.indexOf('"')&&(c=c.replace(kb,"&quot;")),-1!=c.indexOf("'")&&(c=c.replace(lb,"&#39;")),-1!=c.indexOf("\x00")&&(c=c.replace(mb,"&#0;")));return'<iframe width="'+a+'" height="'+b+'" src="'+c+'" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>'};
q.getOptions=function(a){return this.C.namespaces?a?this.C[a].options||[]:this.C.namespaces||[]:[]};
q.getOption=function(a,b){if(this.C.namespaces&&a&&b)return this.C[a][b]};
function ng(a){if("iframe"!=a.tagName.toLowerCase()){var b=P(a,"videoid");b&&(b={videoId:b,width:P(a,"width"),height:P(a,"height")},new Z(a,b))}}
;function og(a,b){var c={title:"Thumbnail",videoId:"",width:120,height:68};if(b)for(var d in b)c[d]=b[d];Y.call(this,a,c,"thumbnail")}
na(og,Y);og.prototype.M=function(){return"/embed/"+R(this.g,"videoId")};
og.prototype.L=function(){return{player:0,thumb_width:R(this.g,"thumbWidth"),thumb_height:R(this.g,"thumbHeight"),thumb_align:R(this.g,"thumbAlign")}};
og.prototype.I=function(a,b){Y.prototype.I.call(this,a,b?b.info:void 0)};
function pg(a){if("iframe"!=a.tagName.toLowerCase()){var b=P(a,"videoid");if(b){b={videoId:b,events:{},width:P(a,"width"),height:P(a,"height"),thumbWidth:P(a,"thumb-width"),thumbHeight:P(a,"thumb-height"),thumbAlign:P(a,"thumb-align")};var c=P(a,"onclick");c&&(b.events.onClick=c);new og(a,b)}}}
;D("YT.PlayerState.UNSTARTED",-1);D("YT.PlayerState.ENDED",0);D("YT.PlayerState.PLAYING",1);D("YT.PlayerState.PAUSED",2);D("YT.PlayerState.BUFFERING",3);D("YT.PlayerState.CUED",5);D("YT.get",function(a){return Od[a]});
D("YT.scan",Rd);D("YT.subscribe",function(a,b,c){cd.subscribe(a,b,c);Qd[a]=!0;for(var d in Od)gg(Od[d],a)});
D("YT.unsubscribe",function(a,b,c){bd(a,b,c)});
D("YT.Player",Z);D("YT.Thumbnail",og);Y.prototype.destroy=Y.prototype.destroy;Y.prototype.setSize=Y.prototype.setSize;Y.prototype.getIframe=Y.prototype.pa;Y.prototype.addEventListener=Y.prototype.addEventListener;Z.prototype.getVideoEmbedCode=Z.prototype.getVideoEmbedCode;Z.prototype.getOptions=Z.prototype.getOptions;Z.prototype.getOption=Z.prototype.getOption;Pd.push(function(a){a=Sd("player",a);G(a,ng)});
Pd.push(function(){var a=Sd("thumbnail");G(a,pg)});
"undefined"!=typeof YTConfig&&YTConfig.parsetags&&"onload"!=YTConfig.parsetags||Rd();var qg=A.onYTReady;qg&&qg();var rg=A.onYouTubeIframeAPIReady;rg&&rg();var sg=A.onYouTubePlayerAPIReady;sg&&sg();}).call(this);
