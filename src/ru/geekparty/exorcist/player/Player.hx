package ru.geekparty.exorcist.player;

/**
 * ...
 * @author ratnikova
 */

class Player 
{
	
	private var _score:Int;
	
	public function new() 
	{
		_score = 0;
	}
	
	public function setScore(value:Int):Void
	{
		_score = value;
	}
	
	public function getScore():Int
	{
		return _score;
	}
	
}