package ru.geekparty.exorcist.screen;
import nme.events.IEventDispatcher;

/**
 * ...
 * @author ilyichzc
 */

interface IScreen implements IEventDispatcher
{
	public function dispose():Void;
	public function onEnterFrame():Void;
	public function onResize(newWidth:Int, newHeight:Int):Void;
}