package ;


import format.swf.symbol.Symbol;
import format.swf.MovieClip;
import format.SWF;
import nme.Assets;


class Attack extends MovieClip {
	
	
	public function new () {
		
		if (!SWF.instances.exists ("libraries/game_resources.swf")) {
			
			SWF.instances.set ("libraries/game_resources.swf", new SWF (Assets.getBytes ("libraries/game_resources.swf")));
			
		}
		
		var swf = SWF.instances.get ("libraries/game_resources.swf");
		
		switch (swf.getSymbol (7)) {
			
			case spriteSymbol (data):
				
				super (data);
			
			default:
				
				super ();
			
		}
		
	}
	
	
}