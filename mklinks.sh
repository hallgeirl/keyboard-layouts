#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
rm ~/qmk_firmware/keyboards/keebio/iris/keymaps/colemak_v1
rm ~/qmk_firmware/keyboards/crkbd/keymaps/colemak_v1
ln -s $SCRIPT_DIR/keyboards/iris/rev8/colemak_v1 ~/qmk_firmware/keyboards/keebio/iris/keymaps/colemak_v1
ln -s $SCRIPT_DIR/keyboards/crkbd/rev1/colemak_v1 ~/qmk_firmware/keyboards/crkbd/keymaps/colemak_v1
