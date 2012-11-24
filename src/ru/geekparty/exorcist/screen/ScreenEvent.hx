package ru.geekparty.exorcist.screen;
import nme.events.Event;

/**
 * ...
 * @author ilyichzc
 */

class ScreenEvent extends Event
{
	inline public static var CLOSE_PRESSED:String = "screenClosePressed";
	
	public function new( type:String ) 
	{
		super( type);
	}
	
}