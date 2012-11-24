import ru.geekparty.exorcist.Main;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new NMEPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		
		haxe.Log.trace = flashTrace; // null
		

		if (call_real)
			begin ();
	}

	
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;

        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	
	
	private static function begin () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(ru.geekparty.exorcist.Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (ru.geekparty.exorcist.Main, Reflect.field (ru.geekparty.exorcist.Main, "main"), []);
		}
		else
		{
			nme.Lib.current.addChild(cast (Type.createInstance(ru.geekparty.exorcist.Main, []), nme.display.DisplayObject));	
		}
		
	}

	static function onEnter (_) {
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="libraries/game_resources.swf")
			 
            return Assets.getBytes ("libraries/game_resources.swf");
         
		
		if (inName=="libraries/menu.swf")
			 
            return Assets.getBytes ("libraries/menu.swf");
         
		
		if (inName=="img/another.png")
			 
            return Assets.getBitmapData ("img/another.png");
         
		
		if (inName=="img/exit.png")
			 
            return Assets.getBitmapData ("img/exit.png");
         
		
		if (inName=="img/girl.json")
			 
			 return Assets.getText ("img/girl.json");
         
		
		if (inName=="img/girl.png")
			 
            return Assets.getBitmapData ("img/girl.png");
         
		
		if (inName=="img/start.png")
			 
            return Assets.getBitmapData ("img/start.png");
         
		
		if (inName=="assets/sounds/fire_loop.mp3")
			 
            return Assets.getSound ("assets/sounds/fire_loop.mp3");
		 
		
		if (inName=="assets/sounds/growl.mp3")
			 
            return Assets.getSound ("assets/sounds/growl.mp3");
		 
		
		if (inName=="assets/sounds/on_playerTouch.mp3")
			 
            return Assets.getSound ("assets/sounds/on_playerTouch.mp3");
		 
		
		if (inName=="assets/sounds/scream_good.mp3")
			 
            return Assets.getSound ("assets/sounds/scream_good.mp3");
		 
		
		if (inName=="assets/sounds/theme.mp3")
			 
            return Assets.getSound ("assets/sounds/theme.mp3");
		 
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}


class NME_libraries_game_resources_swf extends nme.utils.ByteArray { }
class NME_libraries_menu_swf extends nme.utils.ByteArray { }
class NME_img_another_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_img_exit_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_img_girl_json extends nme.utils.ByteArray { }
class NME_img_girl_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_img_start_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sounds_fire_loop_mp3 extends nme.media.Sound { }
class NME_assets_sounds_growl_mp3 extends nme.media.Sound { }
class NME_assets_sounds_on_playertouch_mp3 extends nme.media.Sound { }
class NME_assets_sounds_scream_good_mp3 extends nme.media.Sound { }
class NME_assets_sounds_theme_mp3 extends nme.media.Sound { }

