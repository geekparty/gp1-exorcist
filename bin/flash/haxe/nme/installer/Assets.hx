package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceClasses.set ("libraries/game_resources.swf", NME_libraries_game_resources_swf);
			resourceTypes.set ("libraries/game_resources.swf", "binary");
			resourceClasses.set ("libraries/menu.swf", NME_libraries_menu_swf);
			resourceTypes.set ("libraries/menu.swf", "binary");
			resourceClasses.set ("img/another.png", NME_img_another_png);
			resourceTypes.set ("img/another.png", "image");
			resourceClasses.set ("img/exit.png", NME_img_exit_png);
			resourceTypes.set ("img/exit.png", "image");
			resourceClasses.set ("img/girl.json", NME_img_girl_json);
			resourceTypes.set ("img/girl.json", "text");
			resourceClasses.set ("img/girl.png", NME_img_girl_png);
			resourceTypes.set ("img/girl.png", "image");
			resourceClasses.set ("img/start.png", NME_img_start_png);
			resourceTypes.set ("img/start.png", "image");
			resourceClasses.set ("assets/sounds/fire_loop.mp3", NME_assets_sounds_fire_loop_mp3);
			resourceTypes.set ("assets/sounds/fire_loop.mp3", "music");
			resourceClasses.set ("assets/sounds/growl.mp3", NME_assets_sounds_growl_mp3);
			resourceTypes.set ("assets/sounds/growl.mp3", "music");
			resourceClasses.set ("assets/sounds/on_playerTouch.mp3", NME_assets_sounds_on_playertouch_mp3);
			resourceTypes.set ("assets/sounds/on_playerTouch.mp3", "music");
			resourceClasses.set ("assets/sounds/scream_good.mp3", NME_assets_sounds_scream_good_mp3);
			resourceTypes.set ("assets/sounds/scream_good.mp3", "music");
			resourceClasses.set ("assets/sounds/theme.mp3", NME_assets_sounds_theme_mp3);
			resourceTypes.set ("assets/sounds/theme.mp3", "music");
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = cast (Type.createInstance (resourceClasses.get (id), []), BitmapData);
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceClasses.exists (id)) {
			
			return Type.createInstance (resourceClasses.get (id), []);
			
		} else {
			
			trace ("[nme.Assets] There is no ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return cast (Type.createInstance (resourceClasses.get (id), []), Font);
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound" || resourceTypes.get (id) == "music") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Sound);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
}