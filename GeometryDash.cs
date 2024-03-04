using System;
using System.Collections.Generic;
using CrowdControl.Common;
using ConnectorType = CrowdControl.Common.ConnectorType;

namespace CrowdControl.Games.Packs.GeometryDash
{

    public class GeometryDash : SimpleTCPPack
    {
        public override string Host => "127.0.0.1";

        public override ushort Port => 33940;

        public override ISimpleTCPPack.MessageFormat MessageFormat => ISimpleTCPPack.MessageFormat.CrowdControlLegacy;

        public GeometryDash(UserRecord player, Func<CrowdControlBlock, bool> responseHandler, Action<object> statusUpdateHandler) : base(player, responseHandler, statusUpdateHandler) { }

        public override Game Game { get; } = new("Geometry Dash", "GeometryDash", "PC", ConnectorType.SimpleTCPServerConnector);

        public override EffectList Effects => new List<Effect>
        {

                new Effect("Close Up Camera", "zoomin") { Category = "Camera", Duration = 10},
				new Effect("Far Camera", "zoomout") { Category = "Camera", Duration = 10},
				new Effect("Ultra Far Camera", "zoomout2") { Category = "Camera", Duration = 10},

				new Effect("Skew Camera", "rotate") { Category = "Camera", Duration = 10},
				new Effect("Strong Skew Camera", "rotate2") { Category = "Camera", Duration = 10},

				new Effect("Tilt Camera", "rotate3") { Category = "Camera", Duration = 10},
				new Effect("Strong Tilt Camera", "rotate4") { Category = "Camera", Duration = 10},

				new Effect("Rotate Camera", "rotate5") { Category = "Camera", Duration = 10},
				new Effect("Flip Camera", "rotate6") { Category = "Camera", Duration = 10},

				new Effect("Spin Camera", "spin") {Category = "Camera" },

				new Effect("Invisible Player", "invis") { Duration = 10 },
				new Effect("Reverse Player", "reverse") { Duration = 3 },
				new Effect("Invert Controls", "invert") { Duration = 10 },


				new Effect("Giant Player", "giant") { Category = "Size", Duration = 10},
				new Effect("Tiny Player", "tiny") { Category = "Size", Duration = 10},

				new Effect("Red Player", "red") {Category = "Color" },
				new Effect("Orange Player", "orange") {Category = "Color" },
				new Effect("Yellow Player", "yellow") {Category = "Color" },
				new Effect("Green Player", "green") {Category = "Color" },
				new Effect("Blue Player", "blue") {Category = "Color" },
				new Effect("Purple Player", "purple") {Category = "Color" },
				new Effect("Pink Player", "pink") {Category = "Color" },
				new Effect("White Player", "white") {Category = "Color" },
				new Effect("Black Player", "black") {Category = "Color" },

				//new Effect("bird", "bird"),



        };
    }
}