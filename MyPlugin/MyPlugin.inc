
function MyPlugin()
{
	this.callback = null;
	
	this.GetVersion = function( num, txt ) 
	{ 
		return 1.0; 
	}
	
    this.MyFunc = function( txt, num, bool ) 
    { 
		this.callback( txt + " World!!", num+20, !bool ); 
	}
	
    this.SetOnMyReply = function( cb ) 
    { 
		this.callback = cb; 
	}
}
