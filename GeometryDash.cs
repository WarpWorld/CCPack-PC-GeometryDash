using System.Diagnostics.CodeAnalysis;
using ConnectorLib.SimpleTCP;
using CrowdControl.Common;
using ConnectorType = CrowdControl.Common.ConnectorType;

namespace CrowdControl.Games.Packs.GeometryDash;

public class GeometryDash : SimpleTCPPack<SimpleTCPServerConnector>
{
    public override string Host => "127.0.0.1";

    public override ushort Port => 33940;

    public override HashSet<string> OmittedFields { get; } = ["sourceDetails"];

    [SuppressMessage("CrowdControl.PackMetadata", "CC1009:Message Format Property")]
    public override ISimpleTCPPack.MessageFormatType MessageFormat => ISimpleTCPPack.MessageFormatType.CrowdControlLegacy;

    public GeometryDash(UserRecord player, Func<CrowdControlBlock, bool> responseHandler, Action<object> statusUpdateHandler) : base(player, responseHandler, statusUpdateHandler) { }

    public override Game Game { get; } = new("Geometry Dash", "GeometryDash", "PC", ConnectorType.SimpleTCPServerConnector);

    public override EffectList Effects { get; } = new List<Effect>
    {

        new("Close Up Camera", "zoomin") { Category = "Camera", Duration = 10},
        new("Far Camera", "zoomout") { Category = "Camera", Duration = 10},
        new("Ultra Far Camera", "zoomout2") { Category = "Camera", Duration = 10},

        new("Skew Camera", "rotate") { Category = "Camera", Duration = 10},
        new("Strong Skew Camera", "rotate2") { Category = "Camera", Duration = 10},

        new("Tilt Camera", "rotate3") { Category = "Camera", Duration = 10},
        new("Strong Tilt Camera", "rotate4") { Category = "Camera", Duration = 10},

        new("Rotate Camera", "rotate5") { Category = "Camera", Duration = 10},
        new("Flip Camera", "rotate6") { Category = "Camera", Duration = 10},

        new("Spin Camera", "spin") {Category = "Camera" },

        new("Trigger Jump", "jump"),
        new("Invisible Player", "invis") { Duration = 10 },
        new("Reverse Player", "reverse") { Duration = 3 },
        new("Invert Controls", "invert") { Duration = 10 },


        new("Giant Player", "giant") { Category = "Size", Duration = 10},
        new("Tiny Player", "tiny") { Category = "Size", Duration = 10},

        new("Red Player", "red") {Category = "Color" },
        new("Orange Player", "orange") {Category = "Color" },
        new("Yellow Player", "yellow") {Category = "Color" },
        new("Green Player", "green") {Category = "Color" },
        new("Blue Player", "blue") {Category = "Color" },
        new("Purple Player", "purple") {Category = "Color" },
        new("Pink Player", "pink") {Category = "Color" },
        new("White Player", "white") {Category = "Color" },
        new("Black Player", "black") {Category = "Color" },

        //new Effect("bird", "bird"),



    };
}
