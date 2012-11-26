package ;


import format.swf.symbol.Symbol;
import format.swf.MovieClip;
import format.SWF;
import nme.Assets;


class EndMenuResources extends MovieClip {
	
	
	public function new () {
		
		if (!SWF.instances.exists ("libraries/menu.swf")) {
			
			SWF.instances.set ("libraries/menu.swf", new SWF (Assets.getBytes ("libraries/menu.swf")));
			
		}
		
		var swf = SWF.instances.get ("libraries/menu.swf");
		
		switch (swf.getSymbol (25)) {
			
			case spriteSymbol (data):
				
				super (data);
			
			default:
				
				super ();
			
		}
		
	}
	
	
}