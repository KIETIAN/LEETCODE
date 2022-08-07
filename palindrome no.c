<!DOCTYPE html>







<html>
  <head>
    <meta charset="utf-8"><script type="text/javascript">(window.NREUM||(NREUM={})).init={ajax:{deny_list:["bam.nr-data.net"]}};(window.NREUM||(NREUM={})).loader_config={xpid:"UAQDVFVRGwEAXVlbBAg=",licenseKey:"8d5fb92f6e",applicationID:"2098939"};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var i=e[n]={exports:{}};t[n][0].call(i.exports,function(e){var i=t[n][1][e];return r(i||e)},i,i.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var i=0;i<n.length;i++)r(n[i]);return r}({1:[function(t,e,n){function r(t){try{s.console&&console.log(t)}catch(e){}}var i,o=t("ee"),a=t(27),s={};try{i=localStorage.getItem("__nr_flags").split(","),console&&"function"==typeof console.log&&(s.console=!0,i.indexOf("dev")!==-1&&(s.dev=!0),i.indexOf("nr_dev")!==-1&&(s.nrDev=!0))}catch(c){}s.nrDev&&o.on("internal-error",function(t){r(t.stack)}),s.dev&&o.on("fn-err",function(t,e,n){r(n.stack)}),s.dev&&(r("NR AGENT IN DEVELOPMENT MODE"),r("flags: "+a(s,function(t,e){return t}).join(", ")))},{}],2:[function(t,e,n){function r(t,e,n,r,s){try{p?p-=1:i(s||new UncaughtException(t,e,n),!0)}catch(f){try{o("ierr",[f,c.now(),!0])}catch(d){}}return"function"==typeof u&&u.apply(this,a(arguments))}function UncaughtException(t,e,n){this.message=t||"Uncaught error with no additional information",this.sourceURL=e,this.line=n}function i(t,e){var n=e?null:c.now();o("err",[t,n])}var o=t("handle"),a=t(28),s=t("ee"),c=t("loader"),f=t("gos"),u=window.onerror,d=!1,l="nr@seenError";if(!c.disabled){var p=0;c.features.err=!0,t(1),window.onerror=r;try{throw new Error}catch(h){"stack"in h&&(t(10),t(9),"addEventListener"in window&&t(6),c.xhrWrappable&&t(11),d=!0)}s.on("fn-start",function(t,e,n){d&&(p+=1)}),s.on("fn-err",function(t,e,n){d&&!n[l]&&(f(n,l,function(){return!0}),this.thrown=!0,i(n))}),s.on("fn-end",function(){d&&!this.thrown&&p>0&&(p-=1)}),s.on("internal-error",function(t){o("ierr",[t,c.now(),!0])})}},{}],3:[function(t,e,n){var r=t("loader");r.disabled||(r.features.ins=!0)},{}],4:[function(t,e,n){function r(){var t=new PerformanceObserver(function(t,e){var n=t.getEntries();s(v,[n])});try{t.observe({entryTypes:["resource"]})}catch(e){}}function i(t){if(s(v,[window.performance.getEntriesByType(w)]),window.performance["c"+l])try{window.performance[h](m,i,!1)}catch(t){}else try{window.performance[h]("webkit"+m,i,!1)}catch(t){}}function o(t){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var a=t("ee"),s=t("handle"),c=t(10),f=t(9),u=t(5),d=t(19),l="learResourceTimings",p="addEventListener",h="removeEventListener",m="resourcetimingbufferfull",v="bstResource",w="resource",g="-start",y="-end",x="fn"+g,b="fn"+y,E="bstTimer",R="pushState",S=t("loader");if(!S.disabled){S.features.stn=!0,t(8),"addEventListener"in window&&t(6);var O=NREUM.o.EV;a.on(x,function(t,e){var n=t[0];n instanceof O&&(this.bstStart=S.now())}),a.on(b,function(t,e){var n=t[0];n instanceof O&&s("bst",[n,e,this.bstStart,S.now()])}),c.on(x,function(t,e,n){this.bstStart=S.now(),this.bstType=n}),c.on(b,function(t,e){s(E,[e,this.bstStart,S.now(),this.bstType])}),f.on(x,function(){this.bstStart=S.now()}),f.on(b,function(t,e){s(E,[e,this.bstStart,S.now(),"requestAnimationFrame"])}),a.on(R+g,function(t){this.time=S.now(),this.startPath=location.pathname+location.hash}),a.on(R+y,function(t){s("bstHist",[location.pathname+location.hash,this.startPath,this.time])}),u()?(s(v,[window.performance.getEntriesByType("resource")]),r()):p in window.performance&&(window.performance["c"+l]?window.performance[p](m,i,d(!1)):window.performance[p]("webkit"+m,i,d(!1))),document[p]("scroll",o,d(!1)),document[p]("keypress",o,d(!1)),document[p]("click",o,d(!1))}}},{}],5:[function(t,e,n){e.exports=function(){return"PerformanceObserver"in window&&"function"==typeof window.PerformanceObserver}},{}],6:[function(t,e,n){function r(t){for(var e=t;e&&!e.hasOwnProperty(u);)e=Object.getPrototypeOf(e);e&&i(e)}function i(t){s.inPlace(t,[u,d],"-",o)}function o(t,e){return t[1]}var a=t("ee").get("events"),s=t("wrap-function")(a,!0),c=t("gos"),f=XMLHttpRequest,u="addEventListener",d="removeEventListener";e.exports=a,"getPrototypeOf"in Object?(r(document),r(window),r(f.prototype)):f.prototype.hasOwnProperty(u)&&(i(window),i(f.prototype)),a.on(u+"-start",function(t,e){var n=t[1];if(null!==n&&("function"==typeof n||"object"==typeof n)){var r=c(n,"nr@wrapped",function(){function t(){if("function"==typeof n.handleEvent)return n.handleEvent.apply(n,arguments)}var e={object:t,"function":n}[typeof n];return e?s(e,"fn-",null,e.name||"anonymous"):n});this.wrapped=t[1]=r}}),a.on(d+"-start",function(t){t[1]=this.wrapped||t[1]})},{}],7:[function(t,e,n){function r(t,e,n){var r=t[e];"function"==typeof r&&(t[e]=function(){var t=o(arguments),e={};i.emit(n+"before-start",[t],e);var a;e[m]&&e[m].dt&&(a=e[m].dt);var s=r.apply(this,t);return i.emit(n+"start",[t,a],s),s.then(function(t){return i.emit(n+"end",[null,t],s),t},function(t){throw i.emit(n+"end",[t],s),t})})}var i=t("ee").get("fetch"),o=t(28),a=t(27);e.exports=i;var s=window,c="fetch-",f=c+"body-",u=["arrayBuffer","blob","json","text","formData"],d=s.Request,l=s.Response,p=s.fetch,h="prototype",m="nr@context";d&&l&&p&&(a(u,function(t,e){r(d[h],e,f),r(l[h],e,f)}),r(s,"fetch",c),i.on(c+"end",function(t,e){var n=this;if(e){var r=e.headers.get("content-length");null!==r&&(n.rxSize=r),i.emit(c+"done",[null,e],n)}else i.emit(c+"done",[t],n)}))},{}],8:[function(t,e,n){var r=t("ee").get("history"),i=t("wrap-function")(r);e.exports=r;var o=window.history&&window.history.constructor&&window.history.constructor.prototype,a=window.history;o&&o.pushState&&o.replaceState&&(a=o),i.inPlace(a,["pushState","replaceState"],"-")},{}],9:[function(t,e,n){var r=t("ee").get("raf"),i=t("wrap-function")(r),o="equestAnimationFrame";e.exports=r,i.inPlace(window,["r"+o,"mozR"+o,"webkitR"+o,"msR"+o],"raf-"),r.on("raf-start",function(t){t[0]=i(t[0],"fn-")})},{}],10:[function(t,e,n){function r(t,e,n){t[0]=a(t[0],"fn-",null,n)}function i(t,e,n){this.method=n,this.timerDuration=isNaN(t[1])?0:+t[1],t[0]=a(t[0],"fn-",this,n)}var o=t("ee").get("timer"),a=t("wrap-function")(o),s="setTimeout",c="setInterval",f="clearTimeout",u="-start",d="-";e.exports=o,a.inPlace(window,[s,"setImmediate"],s+d),a.inPlace(window,[c],c+d),a.inPlace(window,[f,"clearImmediate"],f+d),o.on(c+u,r),o.on(s+u,i)},{}],11:[function(t,e,n){function r(t,e){d.inPlace(e,["onreadystatechange"],"fn-",s)}function i(){var t=this,e=u.context(t);t.readyState>3&&!e.resolved&&(e.resolved=!0,u.emit("xhr-resolved",[],t)),d.inPlace(t,y,"fn-",s)}function o(t){x.push(t),m&&(E?E.then(a):w?w(a):(R=-R,S.data=R))}function a(){for(var t=0;t<x.length;t++)r([],x[t]);x.length&&(x=[])}function s(t,e){return e}function c(t,e){for(var n in t)e[n]=t[n];return e}t(6);var f=t("ee"),u=f.get("xhr"),d=t("wrap-function")(u),l=t(19),p=NREUM.o,h=p.XHR,m=p.MO,v=p.PR,w=p.SI,g="readystatechange",y=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"],x=[];e.exports=u;var b=window.XMLHttpRequest=function(t){var e=new h(t);try{u.emit("new-xhr",[e],e),e.addEventListener(g,i,l(!1))}catch(n){try{u.emit("internal-error",[n])}catch(r){}}return e};if(c(h,b),b.prototype=h.prototype,d.inPlace(b.prototype,["open","send"],"-xhr-",s),u.on("send-xhr-start",function(t,e){r(t,e),o(e)}),u.on("open-xhr-start",r),m){var E=v&&v.resolve();if(!w&&!v){var R=1,S=document.createTextNode(R);new m(a).observe(S,{characterData:!0})}}else f.on("fn-end",function(t){t[0]&&t[0].type===g||a()})},{}],12:[function(t,e,n){function r(t){if(!s(t))return null;var e=window.NREUM;if(!e.loader_config)return null;var n=(e.loader_config.accountID||"").toString()||null,r=(e.loader_config.agentID||"").toString()||null,f=(e.loader_config.trustKey||"").toString()||null;if(!n||!r)return null;var h=p.generateSpanId(),m=p.generateTraceId(),v=Date.now(),w={spanId:h,traceId:m,timestamp:v};return(t.sameOrigin||c(t)&&l())&&(w.traceContextParentHeader=i(h,m),w.traceContextStateHeader=o(h,v,n,r,f)),(t.sameOrigin&&!u()||!t.sameOrigin&&c(t)&&d())&&(w.newrelicHeader=a(h,m,v,n,r,f)),w}function i(t,e){return"00-"+e+"-"+t+"-01"}function o(t,e,n,r,i){var o=0,a="",s=1,c="",f="";return i+"@nr="+o+"-"+s+"-"+n+"-"+r+"-"+t+"-"+a+"-"+c+"-"+f+"-"+e}function a(t,e,n,r,i,o){var a="btoa"in window&&"function"==typeof window.btoa;if(!a)return null;var s={v:[0,1],d:{ty:"Browser",ac:r,ap:i,id:t,tr:e,ti:n}};return o&&r!==o&&(s.d.tk=o),btoa(JSON.stringify(s))}function s(t){return f()&&c(t)}function c(t){var e=!1,n={};if("init"in NREUM&&"distributed_tracing"in NREUM.init&&(n=NREUM.init.distributed_tracing),t.sameOrigin)e=!0;else if(n.allowed_origins instanceof Array)for(var r=0;r<n.allowed_origins.length;r++){var i=h(n.allowed_origins[r]);if(t.hostname===i.hostname&&t.protocol===i.protocol&&t.port===i.port){e=!0;break}}return e}function f(){return"init"in NREUM&&"distributed_tracing"in NREUM.init&&!!NREUM.init.distributed_tracing.enabled}function u(){return"init"in NREUM&&"distributed_tracing"in NREUM.init&&!!NREUM.init.distributed_tracing.exclude_newrelic_header}function d(){return"init"in NREUM&&"distributed_tracing"in NREUM.init&&NREUM.init.distributed_tracing.cors_use_newrelic_header!==!1}function l(){return"init"in NREUM&&"distributed_tracing"in NREUM.init&&!!NREUM.init.distributed_tracing.cors_use_tracecontext_headers}var p=t(24),h=t(14);e.exports={generateTracePayload:r,shouldGenerateTrace:s}},{}],13:[function(t,e,n){function r(t){var e=this.params,n=this.metrics;if(!this.ended){this.ended=!0;for(var r=0;r<l;r++)t.removeEventListener(d[r],this.listener,!1);return e.protocol&&"data"===e.protocol?void g("Ajax/DataUrl/Excluded"):void(e.aborted||(n.duration=a.now()-this.startTime,this.loadCaptureCalled||4!==t.readyState?null==e.status&&(e.status=0):o(this,t),n.cbTime=this.cbTime,s("xhr",[e,n,this.startTime,this.endTime,"xhr"],this)))}}function i(t,e){var n=c(e),r=t.params;r.hostname=n.hostname,r.port=n.port,r.protocol=n.protocol,r.host=n.hostname+":"+n.port,r.pathname=n.pathname,t.parsedOrigin=n,t.sameOrigin=n.sameOrigin}function o(t,e){t.params.status=e.status;var n=v(e,t.lastSize);if(n&&(t.metrics.rxSize=n),t.sameOrigin){var r=e.getResponseHeader("X-NewRelic-App-Data");r&&(t.params.cat=r.split(", ").pop())}t.loadCaptureCalled=!0}var a=t("loader");if(a.xhrWrappable&&!a.disabled){var s=t("handle"),c=t(14),f=t(12).generateTracePayload,u=t("ee"),d=["load","error","abort","timeout"],l=d.length,p=t("id"),h=t(20),m=t(18),v=t(15),w=t(19),g=t(21).recordSupportability,y=NREUM.o.REQ,x=window.XMLHttpRequest;a.features.xhr=!0,t(11),t(7),u.on("new-xhr",function(t){var e=this;e.totalCbs=0,e.called=0,e.cbTime=0,e.end=r,e.ended=!1,e.xhrGuids={},e.lastSize=null,e.loadCaptureCalled=!1,e.params=this.params||{},e.metrics=this.metrics||{},t.addEventListener("load",function(n){o(e,t)},w(!1)),h&&(h>34||h<10)||t.addEventListener("progress",function(t){e.lastSize=t.loaded},w(!1))}),u.on("open-xhr-start",function(t){this.params={method:t[0]},i(this,t[1]),this.metrics={}}),u.on("open-xhr-end",function(t,e){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&e.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid);var n=f(this.parsedOrigin);if(n){var r=!1;n.newrelicHeader&&(e.setRequestHeader("newrelic",n.newrelicHeader),r=!0),n.traceContextParentHeader&&(e.setRequestHeader("traceparent",n.traceContextParentHeader),n.traceContextStateHeader&&e.setRequestHeader("tracestate",n.traceContextStateHeader),r=!0),r&&(this.dt=n)}}),u.on("send-xhr-start",function(t,e){var n=this.metrics,r=t[0],i=this;if(n&&r){var o=m(r);o&&(n.txSize=o)}this.startTime=a.now(),this.listener=function(t){try{"abort"!==t.type||i.loadCaptureCalled||(i.params.aborted=!0),("load"!==t.type||i.called===i.totalCbs&&(i.onloadCalled||"function"!=typeof e.onload))&&i.end(e)}catch(n){try{u.emit("internal-error",[n])}catch(r){}}};for(var s=0;s<l;s++)e.addEventListener(d[s],this.listener,w(!1))}),u.on("xhr-cb-time",function(t,e,n){this.cbTime+=t,e?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof n.onload||this.end(n)}),u.on("xhr-load-added",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&!this.xhrGuids[n]&&(this.xhrGuids[n]=!0,this.totalCbs+=1)}),u.on("xhr-load-removed",function(t,e){var n=""+p(t)+!!e;this.xhrGuids&&this.xhrGuids[n]&&(delete this.xhrGuids[n],this.totalCbs-=1)}),u.on("xhr-resolved",function(){this.endTime=a.now()}),u.on("addEventListener-end",function(t,e){e instanceof x&&"load"===t[0]&&u.emit("xhr-load-added",[t[1],t[2]],e)}),u.on("removeEventListener-end",function(t,e){e instanceof x&&"load"===t[0]&&u.emit("xhr-load-removed",[t[1],t[2]],e)}),u.on("fn-start",function(t,e,n){e instanceof x&&("onload"===n&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=a.now()))}),u.on("fn-end",function(t,e){this.xhrCbStart&&u.emit("xhr-cb-time",[a.now()-this.xhrCbStart,this.onload,e],e)}),u.on("fetch-before-start",function(t){function e(t,e){var n=!1;return e.newrelicHeader&&(t.set("newrelic",e.newrelicHeader),n=!0),e.traceContextParentHeader&&(t.set("traceparent",e.traceContextParentHeader),e.traceContextStateHeader&&t.set("tracestate",e.traceContextStateHeader),n=!0),n}var n,r=t[1]||{};"string"==typeof t[0]?n=t[0]:t[0]&&t[0].url?n=t[0].url:window.URL&&t[0]&&t[0]instanceof URL&&(n=t[0].href),n&&(this.parsedOrigin=c(n),this.sameOrigin=this.parsedOrigin.sameOrigin);var i=f(this.parsedOrigin);if(i&&(i.newrelicHeader||i.traceContextParentHeader))if("string"==typeof t[0]||window.URL&&t[0]&&t[0]instanceof URL){var o={};for(var a in r)o[a]=r[a];o.headers=new Headers(r.headers||{}),e(o.headers,i)&&(this.dt=i),t.length>1?t[1]=o:t.push(o)}else t[0]&&t[0].headers&&e(t[0].headers,i)&&(this.dt=i)}),u.on("fetch-start",function(t,e){this.params={},this.metrics={},this.startTime=a.now(),this.dt=e,t.length>=1&&(this.target=t[0]),t.length>=2&&(this.opts=t[1]);var n,r=this.opts||{},o=this.target;if("string"==typeof o?n=o:"object"==typeof o&&o instanceof y?n=o.url:window.URL&&"object"==typeof o&&o instanceof URL&&(n=o.href),i(this,n),"data"!==this.params.protocol){var s=(""+(o&&o instanceof y&&o.method||r.method||"GET")).toUpperCase();this.params.method=s,this.txSize=m(r.body)||0}}),u.on("fetch-done",function(t,e){if(this.endTime=a.now(),this.params||(this.params={}),"data"===this.params.protocol)return void g("Ajax/DataUrl/Excluded");this.params.status=e?e.status:0;var n;"string"==typeof this.rxSize&&this.rxSize.length>0&&(n=+this.rxSize);var r={txSize:this.txSize,rxSize:n,duration:a.now()-this.startTime};s("xhr",[this.params,r,this.startTime,this.endTime,"fetch"],this)})}},{}],14:[function(t,e,n){var r={};e.exports=function(t){if(t in r)return r[t];if(0===(t||"").indexOf("data:"))return{protocol:"data"};var e=document.createElement("a"),n=window.location,i={};e.href=t,i.port=e.port;var o=e.href.split("://");!i.port&&o[1]&&(i.port=o[1].split("/")[0].split("@").pop().split(":")[1]),i.port&&"0"!==i.port||(i.port="https"===o[0]?"443":"80"),i.hostname=e.hostname||n.hostname,i.pathname=e.pathname,i.protocol=o[0],"/"!==i.pathname.charAt(0)&&(i.pathname="/"+i.pathname);var a=!e.protocol||":"===e.protocol||e.protocol===n.protocol,s=e.hostname===document.domain&&e.port===n.port;return i.sameOrigin=a&&(!e.hostname||s),"/"===i.pathname&&(r[t]=i),i}},{}],15:[function(t,e,n){function r(t,e){var n=t.responseType;return"json"===n&&null!==e?e:"arraybuffer"===n||"blob"===n||"json"===n?i(t.response):"text"===n||""===n||void 0===n?i(t.responseText):void 0}var i=t(18);e.exports=r},{}],16:[function(t,e,n){function r(){}function i(t,e,n,r){return function(){return u.recordSupportability("API/"+e+"/called"),o(t+e,[f.now()].concat(s(arguments)),n?null:this,r),n?void 0:this}}var o=t("handle"),a=t(27),s=t(28),c=t("ee").get("tracer"),f=t("loader"),u=t(21),d=NREUM;"undefined"==typeof window.newrelic&&(newrelic=d);var l=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],p="api-",h=p+"ixn-";a(l,function(t,e){d[e]=i(p,e,!0,"api")}),d.addPageAction=i(p,"addPageAction",!0),d.setCurrentRouteName=i(p,"routeName",!0),e.exports=newrelic,d.interaction=function(){return(new r).get()};var m=r.prototype={createTracer:function(t,e){var n={},r=this,i="function"==typeof e;return o(h+"tracer",[f.now(),t,n],r),function(){if(c.emit((i?"":"no-")+"fn-start",[f.now(),r,i],n),i)try{return e.apply(this,arguments)}catch(t){throw c.emit("fn-err",[arguments,this,t],n),t}finally{c.emit("fn-end",[f.now()],n)}}}};a("actionText,setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,e){m[e]=i(h,e)}),newrelic.noticeError=function(t,e){"string"==typeof t&&(t=new Error(t)),u.recordSupportability("API/noticeError/called"),o("err",[t,f.now(),!1,e])}},{}],17:[function(t,e,n){function r(t){if(NREUM.init){for(var e=NREUM.init,n=t.split("."),r=0;r<n.length-1;r++)if(e=e[n[r]],"object"!=typeof e)return;return e=e[n[n.length-1]]}}e.exports={getConfiguration:r}},{}],18:[function(t,e,n){e.exports=function(t){if("string"==typeof t&&t.length)return t.length;if("object"==typeof t){if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if(!("undefined"!=typeof FormData&&t instanceof FormData))try{return JSON.stringify(t).length}catch(e){return}}}},{}],19:[function(t,e,n){var r=!1;try{var i=Object.defineProperty({},"passive",{get:function(){r=!0}});window.addEventListener("testPassive",null,i),window.removeEventListener("testPassive",null,i)}catch(o){}e.exports=function(t){return r?{passive:!0,capture:!!t}:!!t}},{}],20:[function(t,e,n){var r=0,i=navigator.userAgent.match(/Firefox[\/\s](\d+\.\d+)/);i&&(r=+i[1]),e.exports=r},{}],21:[function(t,e,n){function r(t,e){var n=[a,t,{name:t},e];return o("storeMetric",n,null,"api"),n}function i(t,e){var n=[s,t,{name:t},e];return o("storeEventMetrics",n,null,"api"),n}var o=t("handle"),a="sm",s="cm";e.exports={constants:{SUPPORTABILITY_METRIC:a,CUSTOM_METRIC:s},recordSupportability:r,recordCustom:i}},{}],22:[function(t,e,n){function r(){return s.exists&&performance.now?Math.round(performance.now()):(o=Math.max((new Date).getTime(),o))-a}function i(){return o}var o=(new Date).getTime(),a=o,s=t(29);e.exports=r,e.exports.offset=a,e.exports.getLastTimestamp=i},{}],23:[function(t,e,n){function r(t,e){var n=t.getEntries();n.forEach(function(t){"first-paint"===t.name?p("timing",["fp",Math.floor(t.startTime)]):"first-contentful-paint"===t.name&&p("timing",["fcp",Math.floor(t.startTime)])})}function i(t,e){var n=t.getEntries();if(n.length>0){var r=n[n.length-1];if(f&&f<r.startTime)return;var i=[r],o=a({});o&&i.push(o),p("lcp",i)}}function o(t){t.getEntries().forEach(function(t){t.hadRecentInput||p("cls",[t])})}function a(t){var e=navigator.connection||navigator.mozConnection||navigator.webkitConnection;if(e)return e.type&&(t["net-type"]=e.type),e.effectiveType&&(t["net-etype"]=e.effectiveType),e.rtt&&(t["net-rtt"]=e.rtt),e.downlink&&(t["net-dlink"]=e.downlink),t}function s(t){if(t instanceof w&&!y){var e=Math.round(t.timeStamp),n={type:t.type};a(n),e<=h.now()?n.fid=h.now()-e:e>h.offset&&e<=Date.now()?(e-=h.offset,n.fid=h.now()-e):e=h.now(),y=!0,p("timing",["fi",e,n])}}function c(t){"hidden"===t&&(f=h.now(),p("pageHide",[f]))}if(!("init"in NREUM&&"page_view_timing"in NREUM.init&&"enabled"in NREUM.init.page_view_timing&&NREUM.init.page_view_timing.enabled===!1)){var f,u,d,l,p=t("handle"),h=t("loader"),m=t(26),v=t(19),w=NREUM.o.EV;if("PerformanceObserver"in window&&"function"==typeof window.PerformanceObserver){u=new PerformanceObserver(r);try{u.observe({entryTypes:["paint"]})}catch(g){}d=new PerformanceObserver(i);try{d.observe({entryTypes:["largest-contentful-paint"]})}catch(g){}l=new PerformanceObserver(o);try{l.observe({type:"layout-shift",buffered:!0})}catch(g){}}if("addEventListener"in document){var y=!1,x=["click","keydown","mousedown","pointerdown","touchstart"];x.forEach(function(t){document.addEventListener(t,s,v(!1))})}m(c)}},{}],24:[function(t,e,n){function r(){function t(){return e?15&e[n++]:16*Math.random()|0}var e=null,n=0,r=window.crypto||window.msCrypto;r&&r.getRandomValues&&(e=r.getRandomValues(new Uint8Array(31)));for(var i,o="xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx",a="",s=0;s<o.length;s++)i=o[s],"x"===i?a+=t().toString(16):"y"===i?(i=3&t()|8,a+=i.toString(16)):a+=i;return a}function i(){return a(16)}function o(){return a(32)}function a(t){function e(){return n?15&n[r++]:16*Math.random()|0}var n=null,r=0,i=window.crypto||window.msCrypto;i&&i.getRandomValues&&Uint8Array&&(n=i.getRandomValues(new Uint8Array(t)));for(var o=[],a=0;a<t;a++)o.push(e().toString(16));return o.join("")}e.exports={generateUuid:r,generateSpanId:i,generateTraceId:o}},{}],25:[function(t,e,n){function r(t,e){if(!i)return!1;if(t!==i)return!1;if(!e)return!0;if(!o)return!1;for(var n=o.split("."),r=e.split("."),a=0;a<r.length;a++)if(r[a]!==n[a])return!1;return!0}var i=null,o=null,a=/Version\/(\S+)\s+Safari/;if(navigator.userAgent){var s=navigator.userAgent,c=s.match(a);c&&s.indexOf("Chrome")===-1&&s.indexOf("Chromium")===-1&&(i="Safari",o=c[1])}e.exports={agent:i,version:o,match:r}},{}],26:[function(t,e,n){function r(t){function e(){t(s&&document[s]?document[s]:document[o]?"hidden":"visible")}"addEventListener"in document&&a&&document.addEventListener(a,e,i(!1))}var i=t(19);e.exports=r;var o,a,s;"undefined"!=typeof document.hidden?(o="hidden",a="visibilitychange",s="visibilityState"):"undefined"!=typeof document.msHidden?(o="msHidden",a="msvisibilitychange"):"undefined"!=typeof document.webkitHidden&&(o="webkitHidden",a="webkitvisibilitychange",s="webkitVisibilityState")},{}],27:[function(t,e,n){function r(t,e){var n=[],r="",o=0;for(r in t)i.call(t,r)&&(n[o]=e(r,t[r]),o+=1);return n}var i=Object.prototype.hasOwnProperty;e.exports=r},{}],28:[function(t,e,n){function r(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,i=n-e||0,o=Array(i<0?0:i);++r<i;)o[r]=t[e+r];return o}e.exports=r},{}],29:[function(t,e,n){e.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],ee:[function(t,e,n){function r(){}function i(t){function e(t){return t&&t instanceof r?t:t?f(t,c,a):a()}function n(n,r,i,o,a){if(a!==!1&&(a=!0),!p.aborted||o){t&&a&&t(n,r,i);for(var s=e(i),c=m(n),f=c.length,u=0;u<f;u++)c[u].apply(s,r);var l=d[y[n]];return l&&l.push([x,n,r,s]),s}}function o(t,e){g[t]=m(t).concat(e)}function h(t,e){var n=g[t];if(n)for(var r=0;r<n.length;r++)n[r]===e&&n.splice(r,1)}function m(t){return g[t]||[]}function v(t){return l[t]=l[t]||i(n)}function w(t,e){p.aborted||u(t,function(t,n){e=e||"feature",y[n]=e,e in d||(d[e]=[])})}var g={},y={},x={on:o,addEventListener:o,removeEventListener:h,emit:n,get:v,listeners:m,context:e,buffer:w,abort:s,aborted:!1};return x}function o(t){return f(t,c,a)}function a(){return new r}function s(){(d.api||d.feature)&&(p.aborted=!0,d=p.backlog={})}var c="nr@context",f=t("gos"),u=t(27),d={},l={},p=e.exports=i();e.exports.getOrSetContext=o,p.backlog=d},{}],gos:[function(t,e,n){function r(t,e,n){if(i.call(t,e))return t[e];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:r,writable:!0,enumerable:!1}),r}catch(o){}return t[e]=r,r}var i=Object.prototype.hasOwnProperty;e.exports=r},{}],handle:[function(t,e,n){function r(t,e,n,r){i.buffer([t],r),i.emit(t,e,n)}var i=t("ee").get("handle");e.exports=r,r.ee=i},{}],id:[function(t,e,n){function r(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:a(t,o,function(){return i++})}var i=1,o="nr@id",a=t("gos");e.exports=r},{}],loader:[function(t,e,n){function r(){if(!O++){var t=S.info=NREUM.info,e=m.getElementsByTagName("script")[0];if(setTimeout(f.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&e))return f.abort();c(E,function(e,n){t[e]||(t[e]=n)});var n=a();s("mark",["onload",n+S.offset],null,"api"),s("timing",["load",n]);var r=m.createElement("script");0===t.agent.indexOf("http://")||0===t.agent.indexOf("https://")?r.src=t.agent:r.src=p+"://"+t.agent,e.parentNode.insertBefore(r,e)}}function i(){"complete"===m.readyState&&o()}function o(){s("mark",["domContent",a()+S.offset],null,"api")}var a=t(22),s=t("handle"),c=t(27),f=t("ee"),u=t(25),d=t(17),l=t(19),p=d.getConfiguration("ssl")===!1?"http":"https",h=window,m=h.document,v="addEventListener",w="attachEvent",g=h.XMLHttpRequest,y=g&&g.prototype,x=!1;NREUM.o={ST:setTimeout,SI:h.setImmediate,CT:clearTimeout,XHR:g,REQ:h.Request,EV:h.Event,PR:h.Promise,MO:h.MutationObserver};var b=""+location,E={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-1216.min.js"},R=g&&y&&y[v]&&!/CriOS/.test(navigator.userAgent),S=e.exports={offset:a.getLastTimestamp(),now:a,origin:b,features:{},xhrWrappable:R,userAgent:u,disabled:x};if(!x){t(16),t(23),m[v]?(m[v]("DOMContentLoaded",o,l(!1)),h[v]("load",r,l(!1))):(m[w]("onreadystatechange",i),h[w]("onload",r)),s("mark",["firstbyte",a.getLastTimestamp()],null,"api");var O=0}},{}],"wrap-function":[function(t,e,n){function r(t,e){function n(e,n,r,c,f){function nrWrapper(){var o,a,u,l;try{a=this,o=d(arguments),u="function"==typeof r?r(o,a):r||{}}catch(p){i([p,"",[o,a,c],u],t)}s(n+"start",[o,a,c],u,f);try{return l=e.apply(a,o)}catch(h){throw s(n+"err",[o,a,h],u,f),h}finally{s(n+"end",[o,a,l],u,f)}}return a(e)?e:(n||(n=""),nrWrapper[l]=e,o(e,nrWrapper,t),nrWrapper)}function r(t,e,r,i,o){r||(r="");var s,c,f,u="-"===r.charAt(0);for(f=0;f<e.length;f++)c=e[f],s=t[c],a(s)||(t[c]=n(s,u?c+r:r,i,c,o))}function s(n,r,o,a){if(!h||e){var s=h;h=!0;try{t.emit(n,r,o,e,a)}catch(c){i([c,n,r,o],t)}h=s}}return t||(t=u),n.inPlace=r,n.flag=l,n}function i(t,e){e||(e=u);try{e.emit("internal-error",t)}catch(n){}}function o(t,e,n){if(Object.defineProperty&&Object.keys)try{var r=Object.keys(t);return r.forEach(function(n){Object.defineProperty(e,n,{get:function(){return t[n]},set:function(e){return t[n]=e,e}})}),e}catch(o){i([o],n)}for(var a in t)p.call(t,a)&&(e[a]=t[a]);return e}function a(t){return!(t&&t instanceof Function&&t.apply&&!t[l])}function s(t,e){var n=e(t);return n[l]=t,o(t,n,u),n}function c(t,e,n){var r=t[e];t[e]=s(r,n)}function f(){for(var t=arguments.length,e=new Array(t),n=0;n<t;++n)e[n]=arguments[n];return e}var u=t("ee"),d=t(28),l="nr@original",p=Object.prototype.hasOwnProperty,h=!1;e.exports=r,e.exports.wrapFunction=s,e.exports.wrapInPlace=c,e.exports.argsToArray=f},{}]},{},["loader",2,13,4,3]);</script><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","errorBeacon":"bam.nr-data.net","licenseKey":"8d5fb92f6e","applicationID":"2098939","transactionName":"ZwMAYEdSCktRWxZRXV5JJEFbUBBRX1ZNS0dSCwtHRloLVh5OC11FQ1wxQVdeDUtDUQ1WdlUSA11ZVgBuWV0VFlVVEg==","queueTime":0,"applicationTime":269,"agent":""}</script>
    <title>Palindrome Number - Submission Detail - LeetCode</title>
    <meta property="og:title" content="Palindrome Number - Submission Detail - LeetCode" />

    
    <meta content='width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, viewport-fit=cover' name='viewport' />
    
    <meta name="description" content="Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.


	For example, 121 is a palindrome while 123 is not.


&amp;nbsp;
Example 1:


Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


Example 2:


Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


Example 3:


Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


&amp;nbsp;
Constraints:


	-231&amp;nbsp;&amp;lt;= x &amp;lt;= 231&amp;nbsp;- 1


&amp;nbsp;
Follow up: Could you solve it without converting the integer to a string?" />
    
    <meta property="og:image" content="/static/images/LeetCode_Sharing.png" />
    <meta property="og:description" content="Can you solve this problem? 🤔" />

    

    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png" />
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png" />
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png" />
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png" />
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png" />
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png" />
    <link rel="icon" type="image/png" href="/favicon-16x16.png" sizes="16x16" />
    <link rel="icon" type="image/png" href="/favicon-32x32.png" sizes="32x32" />
    <link rel="icon" type="image/png" href="/favicon-96x96.png" sizes="96x96" />
    <link rel="icon" type="image/png" href="/favicon-160x160.png" sizes="160x160" />
    <link rel="icon" type="image/png" href="/favicon-192x192.png" sizes="192x192" />
    <meta name="application-name" content="LeetCode"/>
    <meta name="msapplication-TileColor" content="#da532c" />
    <meta name="msapplication-TileImage" content="/mstile-144x144.png" />

    

    <script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s
  .createElement(o),m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m
  .parentNode.insertBefore(a,m)})(window,document,'script',
  '//www.google-analytics.com/analytics.js','ga');
  var currentDate=new Date();
  var thresholdDate=new Date(Date.UTC(2022, 0, 1, 0, 0, 0));
  ga('create', 'UA-159258186-1', 'leetcode.com', { userId: 6677160, sampleRate: currentDate <= thresholdDate ? 75 : 100 });
  ga('set', {'dimension1': 'false', 'dimension2': '6677160'});
  ga('require', 'displayfeatures');
  ga('send', 'pageview');
</script>

<script type="text/javascript" defer="defer" src="https://extend.vimeocdn.com/ga/124665836.js"></script>


    <link type="text/css" href="/static/bootstrap/dist/css/bootstrap.min.css?v=3.3.7" rel="stylesheet">
    <link type="text/css" href="/static/font-awesome/css/font-awesome.min.css?cache_version=2" rel="stylesheet">
    <link type="text/css" href="/static/bootstrap-table/dist/bootstrap-table.min.css" rel="stylesheet" />

    
    <link rel="stylesheet" href="/static/CACHE/css/output.0be63aabe1ca.css" type="text/css">

    

     
<link type="text/css" rel="stylesheet" href="/static/animate.css/animate.min.css">
<link rel="stylesheet" href="/static/CACHE/css/output.b1c7f3be53ce.css" type="text/css">

    

    <script src="/static/CACHE/js/output.0ff5509473f6.js"></script>
    <script type="text/javascript" src="/static/jquery/dist/jquery.min.js?v=3.3.1"></script>
    <script>window.jQuery || document.write("<script type=\"text/javascript\" src=\"https://code.jquery.com/jquery-3.3.1.min.js\">\x3C/script>")</script>
    <script type="text/javascript" src="/static/jquery.cookie/jquery.cookie.js"></script>
    <script type="text/javascript" src="/static/jquery-sticky/jquery.sticky.js"></script>
    <script type="text/javascript" src="/static/clipboard/dist/clipboard.min.js"></script>
    <script type="text/javascript" src="/static/sweetalert2/dist/sweetalert2.min.js"></script>
    <script>
      $(document).ready(function(){
        $('.sticky').sticky({topSpacing:0});
      });

      
      
      
      window.LeetCodeData = {
        features: {
          questionTranslation: false,
          subscription: true,
          signUp: true,
          chinaProblemDiscuss: false,
          enableSharedWorker: true,
          enableChannels: false,
          enableDangerZone: true,
          enableRecaptchaV3: true,
          enableIndiaPricing: true,
          enableReferralDiscount: true,
          maxTimeTravelTicketCount: 3,
          enableStoreShippingForm: true,
          enableNewProblemsetBanner: true,
          enableCodingChallengeV2: false,
        },
        regionInfo: "US",
        userStatus: {
          isSignedIn: true,
          optedIn:  true ,
          isPremium: false,
          isAdmin:  false ,
          isStaff:  false ,
          isTranslator:  false ,
          isSuperuser:  false ,
          request_region: 'US',
          region: '',
          plan: 'None',
          countryCode: 'IN',
          permissions: [],
          
            realName: 'Vaibhav Kumar',
            username: 'KIETIANS',
            userSlug: 'KIETIANS',
            avatar: 'https://s3-us-west-1.amazonaws.com/s3-lc-upload/assets/default_avatar.jpg',
            numUnreadNotifications: 0,
            lastModified: 1659675160,
          
          
        },
        chinaURL: "https://leetcode.cn",
        websocketUrl: "wss://sockets.leetcode.com/ws/",
        recaptchaKey: "6LdBpsIUAAAAAKAYWjZfIpn4cJHVIk_tsmxpl7cz",
        recaptchaKeyV2: "6LdBX8MUAAAAAAI4aZHi1C59OJizaJTvPNvWH2wz",
        
        navbar: {
          
            loginSocial: [{"id": "linkedin_oauth2", "login_url": "/accounts/linkedin_oauth2/login/"}, {"id": "google", "login_url": "/accounts/google/login/"}, {"id": "github", "login_url": "/accounts/github/login/"}, {"id": "facebook", "login_url": "/accounts/facebook/login/"}],
          
          loginNext: undefined,
          subscription: true,
          mi: true,
          contest: true,
          discuss: true,
          store: true,
          translate: false,
          identity:  "" ,
        },
      };
    </script>
    <script type="text/javascript" src="/static/angular/angular.min.js"></script>
    <script type="text/javascript" src="/static/jquery-ui-dist/jquery-ui.min.js"></script>
    <script type="text/javascript" src="/static/noty/lib/noty.min.js"></script>
    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script type="text/javascript" src="/static/html5shiv/dist/html5shiv.min.js"></script>
      <script type="text/javascript" src="/static/respond.js/dest/respond.min.js"></script>
    <![endif]-->

    
  </head>
  <body>
    <script type="text/javascript" src="/static/bootstrap/dist/js/bootstrap.min.js?v=3.3.7"></script>
    <script type="text/javascript" src="/static/bootstrap-table/dist/bootstrap-table.min.js"></script>
    <script src="/static/CACHE/js/output.ee2b7fc628e3.js"></script>

    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/runtime.87724bff8.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common/global.decbeea51.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common/styles/index.4857ec0d1.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/vendor-libs.d60c1258f.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common-libs.c6fed6d74.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/new-libs.d88a363a5.js" ></script>

    
     

    
  
  <div id="navbar-root"></div>
  

  <div class="content-wrapper" style="min-height: 100vh">
    <div id="base_content">
       

<div id="submission-app" style="margin-top: 20px" class="container" ng-app="app">
  <div class="row" ng-controller="BaseCtrl as baseCtrl">
    <div class="col-md-12">
      
        <h4><a class="inline-wrap" href="/problems/palindrome-number/">Palindrome Number</a></h4>
      
    </div>
    <div class="col-md-12 extra-top" ng-controller="PollerCtrl">
      
      <h3>Submission Detail</h3>
      <div id="details-summary">
        <table style="width:100%">
        <tr>
        <td>
          <div id="result_progress_row" class="row" ng-cloak ng-show="showResultProgress()"><strong><span id="result_progress">{[{ data.total_correct }]} / {[{ data.total_testcases }]}</span></strong>{[{ testCasesPassedText }]}</div>
        </td>
          <td id="status">Status: <h4 id="result_state" class="inline-wrap text-info" ng-cloak ng-class="{'blue': 'text-info', 'green': 'text-success', 'red': 'text-danger'}[statusColor]">{[{ statusTransText }]}</h4></td>
        </tr>
        <tr>
        <td>
          <div id="ac_output" class="row" ng-cloak ng-show="showAcRuntime()">Runtime: <strong><span id="result_runtime">{[{ data.runtime }]}</span></strong></div>
          
            <div id="ac_output" class="row" ng-cloak ng-show="showAcMemory()">Memory Usage: <strong><span id="result_memory">{[{ data.memory }]}</span></strong></div>
          
          
<div id="result-testcases-panel" class="modal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true"> <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
        <h3 id="myModalLabel">Test cases</h3>
      </div>
      <div class="modal-body">
        <div id="testcase_loading" class="hide row">
          <div class="loading-center">
            <img src="/static/images/loading.gif" class="img-rounded" alt="loading" />
          </div>
        </div>
        <table class="col-md-12 table table-hover table-condensed" id="result-testcases">
          <thead>
            <tr>
              <th>
                Input
              </th>
              <th style="width: 290px">
                Output
              </th>
            </tr>
          </thead>
          <tbody style="font: 12px Menlo,Monaco,Consolas,'Courier New',monospace;">
          </tbody>
        </table>
      </div>
    </div>
  </div>
</div>

        </td>
        <td>
          <div id="submitted-time">Submitted: <strong><span id="result_date">2 days, 1 hour ago</span></strong></div>
        </td>
        </tr>
        </table>
      </div>
      <div id="loading" class="row" ng-show="statusText === 'Pending'">
        <div class="loading-center">
          <img src="/static/images/loading.gif" class="img-rounded" alt="loading" />
        </div>
      </div>
      <div id="last_executed_testcase_output_row" ng-cloak ng-show="showLastTestCase()">
        <div class="alert alert-danger col-md-12 testcase-table-re">
          <div id="runtime_error_row" ng-cloak ng-show="runtimeError" class="testcase-table-row">
            <span class="pad-left testcase-label">Runtime Error Message: </span>
            <span id="runtime_error_output" class="text-danger ng-binding testcase-info">{[{ runtimeError }]}</span>
          </div>
          <div class="testcase-table-row">
            <span class="pad-left testcase-label">Last executed input: </span>
            <span id="last_executed_testcase_output" class="text-danger ng-binding testcase-info">{[{ lastExecutedTestCase }]}</span>
          </div>
        </div>
      </div>
      <div id="result_code_output_row" ng-cloak ng-show="resultCodeOutput">
        <div id="result_code_output" class="alert alert-danger">{[{ resultCodeOutput }]}</div>
      </div>
      <div id="wa_output" ng-cloak ng-show="showWaTestCase()">
        <div class="alert alert-danger col-md-12 testcase-table-wa">
          <div class="testcase-table-row">
            <span class="pad-left testcase-label">Input: </span>
            <span id="result_wa_testcase_input" class="testcase-info text-default">{[{ resultWaTestCaseInput | escape }]}</span>
          </div>
          <div class="testcase-table-row">
            <span class="pad-left testcase-label">Output: </span>
            <span id="result_wa_testcase_output" class="testcase-info text-danger">{[{ resultWaTestCaseOutput | escape }]}</span>
          </div>
          <div class="testcase-table-row">
            <span class="pad-left testcase-label">Expected: </span>
            <span id="result_wa_testcase_expected" class="testcase-info text-success">{[{ resultWaTestCaseExpected | escape }]}</span>
          </div>
        </div>
      </div>
      <hr>
      <div id="content" class="placeholder-content hide" ng-show="statusText === 'Accepted'">
        <h4>Accepted Solutions Runtime Distribution</h4>
        <div id="runtime-placeholder" class="demo-container">
          <div id="runtime_detail_plot_placeholder"></div>
          <br>
          <div id="runtime_overview_plot_placeholder"></div>
          <div style="text-align: center;">
            Zoom area by dragging across this chart
          </div>
        </div>
        <br>
        
          <h4>Accepted Solutions Memory Distribution</h4>
          <div id="memory-placeholder" class="demo-container">
            <div id="memory_detail_plot_placeholder"></div>
            <br>
            <div id="memory_overview_plot_placeholder"></div>
            <div style="text-align: center;">
              Zoom area by dragging across this chart
            </div>
          </div>
        
        
          <div class="animated fadeInLeft">
            <h4><small>Invite friends to challenge <b>Palindrome Number</b></small></h4>
            
            <div
              class="addthis_sharing_toolbox"
              data-title="#LeetCode# I have solved Palindrome Number. Come and join the fun!"
              data-url="leetcode.com/problems/palindrome-number/">
            </div>
            
          </div>
        
      </div>
      <hr>
      

      <div class="row">
        <div class="col-md-12">
          <h4>Submitted Code: <strong><span id="result_date" class="h5">2 days, 1 hour ago</span></strong></h4>
          <div class="row">
            <div class="col-md-12">
              <div class="pull-left">Language: <span id="result_language">cpp</span></div>
              
                <div class="pull-right"><button id="edit-code-btn" class="btn btn-primary" ng-click="baseCtrl.editCode()">&nbsp;&nbsp;Edit Code&nbsp;&nbsp;</button></div>
              
              
            </div>
          </div>
          <div class="row"><p></p></div>
          <div class="row">
            <div class="col-md-12" id="ace" ng-controller="AceCtrl as aceCtrl">
              <div ui-ace="aceCtrl.aceOption()" readonly="true" ng-model="aceCtrl.code" class="editor" ng-cloak></div>
            </div>
          </div>
          <div class="row"><p></p></div>
          
            <div class="row">
              <div class="col-md-12">
                <div class="text-center">
                  <a href="/problems/palindrome-number/">Back to problem</a>
                </div>
              </div>
            </div>
          
        </div>
      </div>
    </div>
  </div>
</div>
<div class="modal fade" id="sample-submission-modal" tabIndex="-1" role="dialog">
  <div class="modal-center">
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">
            <span aria-hidden="true">
              &times;
            </span>
            <span class="sr-only">
              Close
            </span>
          </button>
          <h4 id="sample-submission-header" class="modal-title">
            Sample Code
          </h4>
        </div>
        <div>
          <pre style="margin-bottom: 0px; max-height: 500px; overflow: scroll;"><code id="sample-submission-code"></code></pre>
        </div>
      </div>
    </div>
  </div>
</div>


    </div>
  </div>

  <div id="footer-root"></div>
  <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/new-apps/navbar-footer/index.31b02d76e.js" ></script>


    <script>
      $(document).ready(function() {
        var time_diff = new Date() - new Date(localStorage.getItem('region_switcher_last_close_ts'))
        if (time_diff > 86400000) {  // 86400000ms == 1day
          $("#region_switcher").removeClass('hide');
        }
      });

      function closeRegion() {
        $("#region_switcher").addClass('hide');
        localStorage.setItem('region_switcher_last_close_ts', new Date());
      }
    </script>

     
<script>
// prepare for data
var pageData = {
  submissionData: {
    
    status_code: parseInt('10', 10),
    runtime: '36 ms',
    memory: '5.8 MB',
    
      total_correct : '11510',
    
    
      total_testcases : '11510',
    
    
      compare_result : '11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111',
      input_formatted : '\u0022\u0022',
      input : '',
      expected_output : '',
    
    
      code_output : '',
    
    
    
    
      last_testcase : '',
    
    
  },
  questionId: '9',
  submissionId: '765612378',
  sessionId: '7069838',
  getLangDisplay: 'cpp',
  submissionCode: 'class Solution {\u000Apublic:\u000A    bool isPalindrome(int x) {\u000A            string s \u003D to_string(x)\u003B\u000A            int start \u003D 0\u003B\u000A            int end \u003D s.length() \u002D 1\u003B\u000A\u000A            while(start \u003C end)\u000A            {\u000A                if(s[start++] !\u003D s[end\u002D\u002D])\u000A                    return false\u003B\u000A            }\u000A\u000A            return true\u003B\u000A        }\u000A}\u003B',
  editCodeUrl: '/problems/palindrome-number/',
  checkUrl: '/submissions/detail/765612378/check/',
  runtimeDistributionFormatted: '{\u0022lang\u0022: \u0022cpp\u0022, \u0022distribution\u0022: [[\u00220\u0022, 0.2674], [\u00223\u0022, 0.7652], [\u00224\u0022, 1.0141], [\u00226\u0022, 0.0399], [\u00227\u0022, 2.4738], [\u00228\u0022, 2.6213], [\u00229\u0022, 0.1659], [\u002210\u0022, 0.2766], [\u002211\u0022, 4.5205], [\u002212\u0022, 4.4498], [\u002213\u0022, 0.5255], [\u002214\u0022, 1.094], [\u002215\u0022, 5.6636], [\u002216\u0022, 5.2518], [\u002217\u0022, 1.2169], [\u002218\u0022, 2.2956], [\u002219\u0022, 5.8695], [\u002220\u0022, 5.0029], [\u002221\u0022, 1.8469], [\u002222\u0022, 2.6613], [\u002223\u0022, 5.049], [\u002224\u0022, 4.1271], [\u002225\u0022, 2.1173], [\u002226\u0022, 2.6244], [\u002227\u0022, 3.9151], [\u002228\u0022, 3.0946], [\u002229\u0022, 1.8838], [\u002230\u0022, 2.1419], [\u002231\u0022, 2.6152], [\u002232\u0022, 2.2095], [\u002233\u0022, 1.4658], [\u002234\u0022, 1.6871], [\u002235\u0022, 1.8131], [\u002236\u0022, 1.4658], [\u002237\u0022, 1.1094], [\u002238\u0022, 1.0325], [\u002239\u0022, 1.1893], [\u002240\u0022, 1.1217], [\u002241\u0022, 0.6884], [\u002242\u0022, 0.673], [\u002243\u0022, 0.9096], [\u002244\u0022, 0.6853], [\u002245\u0022, 0.4855], [\u002246\u0022, 0.4333], [\u002247\u0022, 0.5777], [\u002248\u0022, 0.3964], [\u002249\u0022, 0.3042], [\u002250\u0022, 0.4272], [\u002251\u0022, 0.3595], [\u002252\u0022, 0.2919]]}',
  memoryDistributionFormatted: '{\u0022lang\u0022: \u0022cpp\u0022, \u0022distribution\u0022: [[\u00225500\u0022, 0.0092], [\u00225600\u0022, 0.759], [\u00225700\u0022, 8.2819], [\u00225800\u0022, 16.3701], [\u00225900\u0022, 42.6385], [\u00226000\u0022, 20.024], [\u00226100\u0022, 1.4628], [\u00226200\u0022, 1.3859], [\u00226300\u0022, 0.1997], [\u00226400\u0022, 0.0369], [\u00226500\u0022, 0.0154], [\u00226600\u0022, 0.0184], [\u00226700\u0022, 0.0584], [\u00226800\u0022, 0.0553], [\u00226900\u0022, 0.0522], [\u00227000\u0022, 0.0461], [\u00227100\u0022, 0.0184], [\u00227200\u0022, 0.0031], [\u00227300\u0022, 0.0031], [\u00227400\u0022, 0.0092], [\u00227500\u0022, 0.0246], [\u00227600\u0022, 0.0123], [\u00227800\u0022, 0.0123], [\u00227900\u0022, 0.0031], [\u00228000\u0022, 0.0061], [\u00228100\u0022, 0.0031], [\u00228200\u0022, 0.0061], [\u00228300\u0022, 0.0277], [\u00228400\u0022, 0.0492], [\u00228500\u0022, 0.1229], [\u00228600\u0022, 0.0799], [\u00228700\u0022, 0.0092], [\u00228800\u0022, 0.0123], [\u00228900\u0022, 0.0123], [\u00229000\u0022, 0.0277], [\u00229100\u0022, 0.0123], [\u00229300\u0022, 0.1014], [\u00229400\u0022, 0.925], [\u00229500\u0022, 1.2169]]}',
  langs: [
    
  ],
  runtime: '36',
  memory: '5764000',
  enableMemoryDistribution: 'True',
  nonSufficientMsg: 'Sorry. We do not have enough accepted submissions to show distribution chart.'
};
if (isNaN(pageData.submissionData.status_code)) pageData.submissionData.status_code = 0
</script>


<!-- Go to www.addthis.com/dashboard to customize your tools -->
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-54828cb901e9e86a" async="async"></script>
<script src="/static/CACHE/js/output.8914335868ab.js"></script>
<script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/legacy/submission/detail/index.7533e0ffc.js" ></script>


    
      <script type="text/javascript">

  var eventURL = 'https://leetcode.com/jobs/';
  var CONTENT = "🔈 LeetCode is hiring! Apply NOW.🔈";

  function getHashCode(str) {
    var hash = 0,
      i,
      chr;
    if (str.length === 0) return hash;
    for (i = 0; i < str.length; i++) {
      chr = str.charCodeAt(i);
      hash = (hash << 5) - hash + chr;
      hash |= 0;
    }
    return hash;
  }

  var LOCAL_STORAGE_KEY = 'feedback-tab:' + getHashCode(eventURL + CONTENT);
  var CLOSE_BUTTON_CLICKED = false;

  var CLOSE_BUTTON_HTML =
    '\
        <?xml version="1.0" encoding="UTF-8"?>\
        <svg id="close-icon-svg" width="24px" height="24px" viewBox="0 0 24 24" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\
            <title>icon/close</title>\
            <defs></defs>\
            <g id="close-icon" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd">\
                <polygon id="path-1" points="19 6.41 17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12"></polygon>\
            </g>\
        </svg>\
    ';

  function onClickClose(e) {
    e.preventDefault();
    document
      .querySelector('.feedback-anchor')
      .classList.add('feedback-anchor-closing');
    window.localStorage.setItem(LOCAL_STORAGE_KEY, Date.now());
    CLOSE_BUTTON_CLICKED = true;
  }

  function onTransitionEnd(event) {
    if (
      event.target &&
      CLOSE_BUTTON_CLICKED &&
      event.propertyName === 'opacity'
    ) {
      event.target.remove();
    }
  }

  function createFeedbackTab() {
    var closeButton = document.createElement('span');
    closeButton.classList.add('feedback-tab-close-button');
    closeButton.innerHTML = CLOSE_BUTTON_HTML;
    closeButton.addEventListener('click', onClickClose);

    var feedbackTabContent = document.createElement('span');
    feedbackTabContent.innerHTML = CONTENT;

    var feedbackTab = document.createElement('div');
    feedbackTab.classList.add('feedback-tab');

    feedbackTab.appendChild(feedbackTabContent);
    feedbackTab.appendChild(closeButton);

    var feedbackAnchor = document.createElement('a');
    feedbackAnchor.classList.add('feedback-anchor');
    feedbackAnchor.setAttribute('href', eventURL);
    feedbackAnchor.setAttribute('target', '_blank');
    feedbackAnchor.appendChild(feedbackTab);
    feedbackAnchor.addEventListener('transitionend', onTransitionEnd);
    return feedbackAnchor;
  }

  function createComingSoonBanner(text) {
    var banner = document.createElement('div');
    banner.classList.add('card-label');
    banner.style.background = 'rgb(95, 123, 230)';
    banner.style.color = 'white';
    banner.style['font-weight'] = 'bold';
    banner.innerHTML = text;
    return banner;
  }

  function insertFeedbackTab() {
    var feedbackTab = createFeedbackTab();
    var navbarRightContainer = document.getElementById(
      'navbar-right-container'
    );
    if (navbarRightContainer) {
      navbarRightContainer.insertBefore(
        feedbackTab,
        navbarRightContainer.firstChild
      );
    }
  }

  function insertComingSoonBanner(text, clsname) {
    var banner = createComingSoonBanner(text);
    var exploreCardContainer = document.getElementsByClassName(clsname);

    if (!exploreCardContainer.length) {
      return false;
    }

    var innerLayer = exploreCardContainer[0].getElementsByClassName(
      'top-inner-layer'
    );

    if (!innerLayer.length) {
      return false;
    }

    innerLayer[0].insertBefore(banner, innerLayer[0].firstChild);
    return true;
  }

  function loadLeetCodeChallenge() {
    if (!window.localStorage.getItem(LOCAL_STORAGE_KEY)) {
      setTimeout(insertFeedbackTab, 500);
    }

    if (window.location.pathname === '/explore/') {
      var comingSoonInterval = setInterval(function() {
        var res2 = insertComingSoonBanner(
          'Day 30',
          'september-leetcoding-challenge-2021'
        );
        if (/*res && */ res2 && comingSoonInterval) {
          clearInterval(comingSoonInterval);
        }
      }, 300);
    }

    var script = document.createElement('script');
    script.async = true;
    script.src = 'https://leetcode.com/static/cn.js';
    document.body.appendChild(script);
  }
</script>
<style>
  .feedback-tab {
    position: absolute;
    display: flex;
    align-items: center;
    top: 0px;
    right: 270px;
    background-color: #FFA400;
    color: white;
    opacity: 0.6;
    border-radius: 0 0 3px 3px;
    padding: 5px 10px;
    cursor: pointer;
    z-index: 2;
    transition: all 0.3s ease-in-out;
  }
  .feedback-tab:hover {
    opacity: 1;
  }
  .feedback-tab-close-button {
    margin-left: 5px;
    height: 1em;
    width: 1em;
    display: inline-flex;
    align-items: center;
    justify-content: center;
  }
  .feedback-anchor:focus {
    text-decoration: none;
  }
  .feedback-anchor-closing {
    opacity: 0;
    transition: opacity 0.3s ease-in-out;
  }
  aside#region_switcher {
    position: initial;
  }
  #close-icon-svg {
    opacity: 0.5;
    transition: all 0.3s ease-in-out;
  }
  #close-icon-svg:hover {
    opacity: 1;
  }
  #close-icon {
    fill: white;
  }
</style>


<!--@START: Nav Highlight Tag -->
<style>
  [id='interview-nav-item'] a.ant-dropdown-link::after {
    display: block;
    border-radius: 20px;
    padding: 0px 8px;
    color: white;
    font-size: 12px;
    position: absolute;
    top: -9px;
    font-weight: 500;
    transform: scale(0.6);
    right: -25px;
    content: 'New';
    background: rgb(236, 64, 122);
  }
  [class*='nav-item-container'] a[href='/contest/']::after {
    display: block;
    background: red;
    border-radius: 20px;
    padding: 0px 8px;
    color: white;
    font-size: 12px;
    position: absolute;
    top: -9px;
    right: -15px;
    font-weight: 500;
    transform: scale(0.6);
  }
</style>

<script type="text/javascript">
  var DISCOUNT_URL = '/subscribe/';
  var DISCOUNT_CONTENT =
    'In an effort to fight COVID-19, from now until a limited time only, users residing in India can enjoy discount on both&nbsp';
  var DISCOUNT_LINK = 'monthly and annual subscriptions';

  function createDiscountTab() {
    var discountTabContent = document.createElement('span');
    discountTabContent.innerHTML = DISCOUNT_CONTENT;
    var subscribeLink = document.createElement('a');
    subscribeLink.setAttribute('href', DISCOUNT_URL);
    subscribeLink.classList.add('subscribe-link');
    subscribeLink.innerHTML = DISCOUNT_LINK;
    var exclamation = document.createElement('span');
    exclamation.innerHTML = '!';

    var discountTab = document.createElement('div');
    discountTab.classList.add('col-md-12');
    discountTab.classList.add('alert');
    discountTab.classList.add('alert-warning');

    discountTab.appendChild(discountTabContent);
    discountTab.appendChild(subscribeLink);
    discountTab.appendChild(exclamation);

    var DiscountContainer = document.createElement('div');
    DiscountContainer.classList.add('container');
    DiscountContainer.classList.add('row');
    DiscountContainer.classList.add('no-margin');
    DiscountContainer.classList.add('container-center');
    DiscountContainer.appendChild(discountTab);
    return DiscountContainer;
  }

  function insertDiscountTab() {
    var discountTab = createDiscountTab();
    var container = document.getElementById('base_content');
    if (container) {
      container.insertBefore(discountTab, container.firstChild);
    }
  }

  window.onload = function() {
    if (window.LeetCodeData) {
      const {
        features: { enableIndiaPricing },
        userStatus: { countryCode },
      } = window.LeetCodeData;
      if (
        (window.location.pathname === '/' ||
          window.location.pathname.startsWith('/problemset')) &&
        enableIndiaPricing &&
        countryCode === 'IN'
      ) {
        setTimeout(insertDiscountTab, 500);
      }

      var script = document.createElement('script');
      script.async = true;
      document.body.appendChild(script);
    }
    loadLeetCodeChallenge();
    setTimeout(function() {
        document.getElementsByClassName("sidebar-challenge-ad")[0].style.display = "none";
    }, 1000);
  };
</script>
<style>
  .container-center {
    margin: auto;
    display: flex;
    justify-content: center;
    padding: 0;
    text-align: center;
    margin-top: -10px;
  }
  .subscribe-link {
    cursor: pointer;
  }
</style>
    

    

    <script type="text/javascript" src="/static/legacy/common/js/base.js"></script>

    <script>
      try {
        ace.config.set("basePath", "/static/ace-builds/src-noconflict/")
      } catch(err) {}
    </script>

    <script>
      function recaptchaV2Callback() {
        window.grecaptchaV2 = Object.assign(Object.create(Object.getPrototypeOf(window.grecaptcha)), window.grecaptcha)
      }

      function recaptchaV3Callback() {
        window.grecaptchaV3 = Object.assign(Object.create(Object.getPrototypeOf(window.grecaptcha)), window.grecaptcha)
      }
    </script>

    <script type="text/javascript" src="https://www.recaptcha.net/recaptcha/api.js?onload=recaptchaV2Callback&render=explicit" async
      defer></script>

    
    <script
      src="https://www.recaptcha.net/recaptcha/api.js?onload=recaptchaV3Callback&render=6LdBpsIUAAAAAKAYWjZfIpn4cJHVIk_tsmxpl7cz"></script>
  </body>
</html>
