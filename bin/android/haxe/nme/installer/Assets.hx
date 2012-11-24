package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("libraries/game_resources.swf", "libraries_game_resources_swf");
			resourceTypes.set ("libraries/game_resources.swf", "binary");
			resourceNames.set ("libraries/menu.swf", "libraries_menu_swf");
			resourceTypes.set ("libraries/menu.swf", "binary");
			resourceNames.set ("img/another.png", "img_another_png");
			resourceTypes.set ("img/another.png", "image");
			resourceNames.set ("img/exit.png", "img_exit_png");
			resourceTypes.set ("img/exit.png", "image");
			resourceNames.set ("img/girl.json", "img_girl_json");
			resourceTypes.set ("img/girl.json", "text");
			resourceNames.set ("img/girl.png", "img_girl_png");
			resourceTypes.set ("img/girl.png", "image");
			resourceNames.set ("img/start.png", "img_start_png");
			resourceTypes.set ("img/start.png", "image");
			resourceNames.set ("assets/sounds/fire_loop.mp3", "assets/sounds/fire_loop.mp3");
			resourceTypes.set ("assets/sounds/fire_loop.mp3", "music");
			resourceNames.set ("assets/sounds/growl.mp3", "assets/sounds/growl.mp3");
			resourceTypes.set ("assets/sounds/growl.mp3", "music");
			resourceNames.set ("assets/sounds/on_playerTouch.mp3", "assets/sounds/on_playerTouch.mp3");
			resourceTypes.set ("assets/sounds/on_playerTouch.mp3", "music");
			resourceNames.set ("assets/sounds/scream_good.mp3", "assets/sounds/scream_good.mp3");
			resourceTypes.set ("assets/sounds/scream_good.mp3", "music");
			resourceNames.set ("assets/sounds/theme.mp3", "assets/sounds/theme.mp3");
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
				
				var data = BitmapData.load (resourceNames.get (id));
				
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
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id) == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
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
