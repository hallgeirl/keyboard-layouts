#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
rm ~/qmk_firmware/keyboards/keebio/iris/keymaps/colemak_v1
rm ~/qmk_firmware/keyboards/crkbd/keymaps/colemak_v1
rm ~/qmk_firmware/keyboards/handwired/dactyl_manuform/5x6_3
ln -s $SCRIPT_DIR/keyboards/iris/colemak_v1 ~/qmk_firmware/keyboards/keebio/iris/keymaps/colemak_v1
ln -s $SCRIPT_DIR/keyboards/crkbd/colemak_v1 ~/qmk_firmware/keyboards/crkbd/keymaps/colemak_v1
ln -s $SCRIPT_DIR/keyboards/handwired/dactyl_manuform/5x6_3 ~/qmk_firmware/keyboards/handwired/dactyl_manuform/5x6_3
