class ApplicationMain
{

	#if waxe
	static public var frame : wx.Frame;
	static public var autoShowFrame : Bool = true;
	#if nme
	static public var nmeStage : wx.NMEStage;
	#end
	#end
	
	public static function main()
	{
		#if nme
		nme.Lib.setPackage("Null/", "exorcist", "ru.geekparty.exorcist", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "exorcist", null, { width: 0, height: 0 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 0, height: 0 });
			#end
			
			ru.geekparty.exorcist.Main.main();
			
			if (autoShowFrame)
			{
				wx.App.setTopWindow(frame);
				frame.shown = true;
			}
		});
		#else
		
		nme.Lib.create(function()
			{ 
				if (0 == 0 && 0 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
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
			},
			0, 0, 
			60, 
			0x000000,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(false ? nme.Lib.BORDERLESS : 0) |
			(false ? nme.Lib.VSYNC : 0) |
			(true ? nme.Lib.FULLSCREEN : 0) |
			(1 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(1 == 2 ? nme.Lib.HW_AA : 0),
			"exorcist"
			
		);
		#end
		
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		#if nme
		
		if (inName == "libraries/game_resources.swf")
		{
			
			return nme.Assets.getBytes ("libraries/game_resources.swf");
			
		}
		
		if (inName == "libraries/menu.swf")
		{
			
			return nme.Assets.getBytes ("libraries/menu.swf");
			
		}
		
		if (inName == "img/another.png")
		{
			
			return nme.Assets.getBitmapData ("img/another.png");
			
		}
		
		if (inName == "img/exit.png")
		{
			
			return nme.Assets.getBitmapData ("img/exit.png");
			
		}
		
		if (inName == "img/girl.json")
		{
			
			return nme.Assets.getText ("img/girl.json");
			
		}
		
		if (inName == "img/girl.png")
		{
			
			return nme.Assets.getBitmapData ("img/girl.png");
			
		}
		
		if (inName == "img/start.png")
		{
			
			return nme.Assets.getBitmapData ("img/start.png");
			
		}
		
		if (inName == "assets/sounds/fire_loop.mp3")
		{
			
			return nme.Assets.getSound ("assets/sounds/fire_loop.mp3");
			
		}
		
		if (inName == "assets/sounds/growl.mp3")
		{
			
			return nme.Assets.getSound ("assets/sounds/growl.mp3");
			
		}
		
		if (inName == "assets/sounds/on_playerTouch.mp3")
		{
			
			return nme.Assets.getSound ("assets/sounds/on_playerTouch.mp3");
			
		}
		
		if (inName == "assets/sounds/scream_good.mp3")
		{
			
			return nme.Assets.getSound ("assets/sounds/scream_good.mp3");
			
		}
		
		if (inName == "assets/sounds/theme.mp3")
		{
			
			return nme.Assets.getSound ("assets/sounds/theme.mp3");
			
		}
		
		#end
		return null;
	}
	
	
}
