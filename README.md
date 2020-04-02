# BuckleScript bindings to @react-native-community/clipboard

[![Build Status](https://github.com/reason-react-native/clipboard/workflows/Build/badge.svg)](https://github.com/reason-react-native/clipboard/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/clipboard.svg)](https://www.npmjs.com/package/@reason-react-native/clipboard)

These are complete BuckleScript bindings to
[`@reason-react-native/clipboard`](https://github.com/react-native-community/clipboard),
in Reason syntax.

Version `x.y.z` of `@reason-react-native/clipboard` should be compatible with
version `x.y.*` of `@react-native-community/clipboard`.

## Installation

When
[`@react-native-community/clipboard`](https://github.com/react-native-community/clipboard)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/clipboard
# or
yarn add @reason-react-native/clipboard
```

`@reason-react-native/clipboard` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/clipboard"
  ],
  //...
}
```

## Usage

## Methods

### `getString`

To attempt reading content from the Clipboard; resolves to a `string` if
successful.

```reason
getString: unit => Js.Promise.t(string)
```

### `setString`

To copy a `string` to the Clipbard.

```reason
setString: string => unit
```

## Hooks

### `useClipboard`

```reason
useClipboard: unit => (string, string => unit)
```

#### Example

```reason
open ReactNative;

ReactNativeClipboard.setString("initial value");

let make = () => {
  let (data, setData) = ReactNativeClipboard.useClipboard();

  <View>
    <Button title=data onPress={_ => setData("new value")} />
  </View>

};
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
