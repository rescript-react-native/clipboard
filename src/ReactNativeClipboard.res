@module("@react-native-community/clipboard") @scope("default")
external getString: unit => Js.Promise.t<string> = "getString"

@module("@react-native-community/clipboard") @scope("default")
external setString: string => unit = "setString"

@module("@react-native-community/clipboard") @scope("default")
external hasString: unit => bool = "hasString"

@module("@react-native-community/clipboard") @scope("default")
external hasURL: unit => bool = "hasURL"

@module("@react-native-community/clipboard")
external useClipboard: unit => (string, string => unit) = "useClipboard"
