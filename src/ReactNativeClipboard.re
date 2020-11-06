[@bs.module "@react-native-community/clipboard"] [@bs.scope "default"]
external getString: unit => Js.Promise.t(string) = "getString";

[@bs.module "@react-native-community/clipboard"] [@bs.scope "default"]
external setString: string => unit = "setString";

[@bs.module "@react-native-community/clipboard"] [@bs.scope "default"]
external hasString: unit => bool = "hasString";

[@bs.module "@react-native-community/clipboard"] [@bs.scope "default"]
external hasURL: unit => bool = "hasURL";

[@bs.module "@react-native-community/clipboard"]
external useClipboard: unit => (string, string => unit) = "useClipboard";
