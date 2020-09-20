set -eou pipefail

rm -rf output

cd build
./build-archlinux  -v lily58:default:left:nrfmicro13 -nrf52840
./build-archlinux  -v lily58:default:right:nrfmicro13 -nrf52840

cd ..
rm -rf ~/downloads/lily_blue_*
./uf2conv.py output/lily58/lily58-pca10056-nrfmicro13-default-left.hex -c -f 0xADA52840 -o ~/downloads/lily_blue_left.uf2
./uf2conv.py output/lily58/lily58-pca10056-nrfmicro13-default-right.hex -c -f 0xADA52840 -o ~/downloads/lily_blue_right.uf2


