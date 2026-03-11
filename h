<html lang="en"><head>
<title>WAFLASH</title>
<link rel="stylesheet" href="style.css">
<link rel="canonical" href="https://www.snokido.com/game/whack-the-thief">
<script>
		var gameConfig = {
			swfUrl: "https://w8.snokido.com/games/flash/waflash/whack-the-thief.swf"		
		}
</script>
<script async="" src=""></script></head>
<body>
<div id="waflashContainer">
<canvas class="waflashCanvas" id="canvas" tabindex="1" width="781" height="586" style="cursor: pointer; --waf-content-width: 640px; --waf-content-height: 480px;" waf-content-width="640" waf-content-height="480" waf-content-fps="24"></canvas>
<div id="waflashStatus" style="display: none;">Playing...</div>
<script>
		var ua = navigator.userAgent.toLowerCase();
		if ( (navigator.appName == 'Netscape' && ua.indexOf('trident') != -1) || (ua.indexOf("msie") != -1)) {
    		var waf = document.getElementById('waflashStatus');
			waf.style.display = 'block';
			waf.innerText = '인터넷 익스플로어(IE) 에서는 게임이 실행되지 않습니다 !\n크롬, 엣지등의 다른 브라우저를 이용해주세요.';
			gtag('event', 'connect_from_ie', {'event_category': 'error', 'event_label': ua });
		}
	</script>
<script type="module" crossorigin="anonymous">
		let is_mobile = /Mobi/i.test(window.navigator.userAgent);
		if (is_mobile) {
			function scrollToSubject() {
				try {
					window.scrollTo({
						top: 100,
						left: 0,
						behavior: 'smooth'
					});
				} catch (e) {}
			}
			scrollToSubject();
			window.addEventListener("orientationchange", function() {
				setTimeout(scrollToSubject, 100);
			});
		} else {
			document.getElementById('canvas').focus();
		}
		document.getElementById('canvas').addEventListener("keydown", function(ev) {
			ev.preventDefault();
			ev.stopPropagation();
		});
		document.getElementById('canvas').addEventListener("click", function() {
			document.getElementById('canvas').focus();
		});
		document.addEventListener("mousedown", (function() {
			const canvasElement = document.getElementById('canvas');
			let focused = false;
			return function(ev) {
				if (ev.target == canvasElement) {
					if (!focused) {
						canvasElement.focus();
						focused = true;
					}
				} else {
					if (focused) {
						focused = false;
					}
				}
				return true;
			}
		})());
		
		var golddate=Date;
		Date.now=function(){
			var a=new golddate();
			a.setFullYear('2022'); a.setMonth('06'); a.setDate('01');
			return a.getTime();
		}
		
		import {
			createWaflash
		} from './js/waflash-player.min.js?15';
		createWaflash(gameConfig.swfUrl, window.wafOptions || {});
	</script>
</div>
<script defer="" src="https://static.cloudflareinsights.com/beacon.min.js/v8c78df7c7c0f484497ecbca7046644da1771523124516" integrity="sha512-8DS7rgIrAmghBFwoOTujcf6D9rXvH8xm8JQ1Ja01h9QX8EzXldiszufYa4IFfKdLUKTTrnSFXLDkUEOTrZQ8Qg==" data-cf-beacon="{&quot;version&quot;:&quot;2024.11.0&quot;,&quot;token&quot;:&quot;b062b5bc397843a2b7cac03511be2721&quot;,&quot;server_timing&quot;:{&quot;name&quot;:{&quot;cfCacheStatus&quot;:true,&quot;cfEdge&quot;:true,&quot;cfExtPri&quot;:true,&quot;cfL4&quot;:true,&quot;cfOrigin&quot;:true,&quot;cfSpeedBrain&quot;:true},&quot;location_startswith&quot;:null}}" crossorigin="anonymous"></script>

</body></html>
