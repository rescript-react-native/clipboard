# `@rescript-react-native/clipboard`

[![Build Status](https://github.com/rescript-react-native/clipboard/workflows/Build/badge.svg)](https://github.com/rescript-react-native/clipboard/actions)
[![Version](https://img.shields.io/npm/v/@rescript-react-native/clipboard.svg)](https://www.npmjs.com/@rescript-react-native/clipboard)
[![ReScript Forum](https://img.shields.io/discourse/posts?color=e6484f&label=ReScript%20Forum&server=https%3A%2F%2Fforum.rescript-lang.org)](https://forum.rescript-lang.org/)

[ReScript](https://rescript-lang.org) bindings for
[`@react-native-community/clipboard`](https://github.com/react-native-clipboard/clipboard).

Exposed as `ReactNativeClipboard` module.

`@rescript-react-native/clipboard` X.y.\* means it's compatible with
`@react-native-community/clipboard` X.y.\*

## Installation

When
[`@react-native-community/clipboard`](https://github.com/react-native-clipboard/clipboard)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @rescript-react-native/clipboard
# or
yarn add @rescript-react-native/clipboard
```

`@rescript-react-native/clipboard` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "@rescript/react",
    "rescript-react-native",
    // ...
+    "@rescript-react-native/clipboard"
  ],
  //...
}
```

## Usage

## Methods

### `getString`

To attempt reading content from the Clipboard; resolves to a `string` if
successful.

```rescript
getString: unit => Js.Promise.t(string)
```

### `setString`

To copy a `string` to the Clipbard.

```rescript
setString: string => unit
```

## Hooks

### `useClipboard`

```rescript
useClipboard: unit => (string, string => unit)
```

#### Example

```rescript
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
[contribution guidelines](https://github.com/rescript-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/rescript-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
