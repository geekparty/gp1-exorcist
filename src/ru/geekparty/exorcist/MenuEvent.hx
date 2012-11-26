package ru.geekparty.exorcist;
import nme.events.Event;

/**
 * ...
 * @author ratnikova
 */

class MenuEvent extends Event
{

	public static var PRESS_START:String = "PRESS_START_EVENT";
	
	public function new( type:String ) 
	{
		super( type);
	}
}