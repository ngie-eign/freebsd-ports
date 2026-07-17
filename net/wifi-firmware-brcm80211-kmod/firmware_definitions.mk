# The output provided below was automatically generated with the following command:
# 	whence-to-freebsd-port -i /usr/home/ngie/git/freebsd-ports/net/wifi-firmware-brcm80211-kmod/work-brcm/linux-firmware-20260622.git//WHENCE -o firmware_definitions.mk -e '(brcmfmac|brcmsmac) -.*'
#
# Please do not modify this file.

## Chipset families handled by this port.
FWSUBS+=	brcmfmac
FWSUBS+=	brcmsmac

#
# SECTION: Chipset family specific definitions for brcmfmac.
#

## Firmware blobs, etc.
FILES.brcmfmac+=	"brcm/brcmfmac43241b4-sdio.Advantech-MICA-071.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43241b4-sdio.Intel Corp.-VALLEYVIEW C0 PLATFORM.txt"
FILES.brcmfmac+=	"brcm/brcmfmac4330-sdio.Prowise-PT301.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43340-sdio.ASUSTeK COMPUTER INC.-TF103CE.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43340-sdio.Insyde-VESPA2.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43340-sdio.meegopad-t08.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43340-sdio.pov-tab-p1006w-data.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43340-sdio.predia-basic.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43362-sdio.ASUSTeK COMPUTER INC.-ME176C.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43362-sdio.WC121.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43362-sdio.cubietech,cubietruck.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430-sdio.AP6212.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430-sdio.Hampoo-D2D3_Vi8A1.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430-sdio.MUR1DX.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430-sdio.ilife-S806.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430-sdio.raspberrypi,3-model-b.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430a0-sdio.ONDA-V80 PLUS.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430a0-sdio.ilife-S806.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43430a0-sdio.jumper-ezpad-mini3.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43455-sdio.MINIX-NEO Z83-4.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43455-sdio.Radxa-ROCK Pi X.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43455-sdio.acepc-t8.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43455-sdio.raspberrypi,3-model-b-plus.txt"
FILES.brcmfmac+=	"brcm/brcmfmac43455-sdio.raspberrypi,4-model-b.txt"
FILES.brcmfmac+=	"brcm/brcmfmac4356-pcie.Intel Corporation-CHERRYVIEW D1 PLATFORM.txt"
FILES.brcmfmac+=	"brcm/brcmfmac4356-pcie.Xiaomi Inc-Mipad2.txt"
FILES.brcmfmac+=	"brcm/brcmfmac4356-pcie.gpd-win-pocket.txt"
FILES.brcmfmac+=	brcm/bcm4329-fullmac-4.bin
FILES.brcmfmac+=	brcm/brcmfmac43143-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43143.bin
FILES.brcmfmac+=	brcm/brcmfmac43236b.bin
FILES.brcmfmac+=	brcm/brcmfmac43241b0-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43241b4-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43241b5-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43242a.bin
FILES.brcmfmac+=	brcm/brcmfmac4329-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac4330-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac4334-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac4335-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43430a0-sdio.bin
FILES.brcmfmac+=	brcm/brcmfmac43455-sdio.AW-CM256SM.txt
FILES.brcmfmac+=	brcm/brcmfmac4350-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4350c2-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4354-sdio.nvidia,p2371-2180.txt
FILES.brcmfmac+=	brcm/brcmfmac4356-sdio.AP6356S.txt
FILES.brcmfmac+=	brcm/brcmfmac43569.bin
FILES.brcmfmac+=	brcm/brcmfmac4358-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac43602-pcie.ap.bin
FILES.brcmfmac+=	brcm/brcmfmac43602-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4366b-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4366c-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4371-pcie.bin
FILES.brcmfmac+=	brcm/brcmfmac4373.bin
FILES.brcmfmac+=	cypress/cyfmac43012-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac43012-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac43340-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac43362-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac4339-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac43430-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac43430-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac43455-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac43455-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac4354-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac4354-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac4356-pcie.bin
FILES.brcmfmac+=	cypress/cyfmac4356-pcie.clm_blob
FILES.brcmfmac+=	cypress/cyfmac4356-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac4356-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac43570-pcie.bin
FILES.brcmfmac+=	cypress/cyfmac43570-pcie.clm_blob
FILES.brcmfmac+=	cypress/cyfmac4373-sdio.bin
FILES.brcmfmac+=	cypress/cyfmac4373-sdio.clm_blob
FILES.brcmfmac+=	cypress/cyfmac54591-pcie.bin
FILES.brcmfmac+=	cypress/cyfmac54591-pcie.clm_blob
FILES.${FWDRV}+=	${FILES.brcmfmac}

## License files.
LICENSE_FILES.brcmfmac+=	LICENCE.broadcom_bcm43xx
LICENSE_FILES.brcmfmac+=	LICENCE.cypress
LICENSE_FILES.brcmfmac+=	brcm/brcmfmac43455-sdio.AW-CM256SM.txt
LICENSE_FILES.brcmfmac+=	brcm/brcmfmac4354-sdio.nvidia,p2371-2180.txt
LICENSE_FILES.brcmfmac+=	brcm/brcmfmac4356-sdio.AP6356S.txt
LICENSE_FILES.${FWDRV}+= ${LICENSE_FILES.brcmfmac}

## Links required for the firmware to function.
LINKS.brcmfmac+= ../cypress/cyfmac43012-sdio.bin brcm/brcmfmac43012-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac43012-sdio.clm_blob brcm/brcmfmac43012-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac43340-sdio.bin brcm/brcmfmac43340-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac43362-sdio.bin brcm/brcmfmac43362-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac4339-sdio.bin brcm/brcmfmac4339-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac43430-sdio.bin brcm/brcmfmac43430-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac43430-sdio.clm_blob brcm/brcmfmac43430-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac43455-sdio.bin brcm/brcmfmac43455-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac43455-sdio.clm_blob brcm/brcmfmac43455-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac4354-sdio.bin brcm/brcmfmac4354-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac4354-sdio.clm_blob brcm/brcmfmac4354-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac4356-pcie.bin brcm/brcmfmac4356-pcie.bin
LINKS.brcmfmac+= ../cypress/cyfmac4356-pcie.clm_blob brcm/brcmfmac4356-pcie.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac4356-sdio.bin brcm/brcmfmac4356-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac4356-sdio.clm_blob brcm/brcmfmac4356-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac43570-pcie.bin brcm/brcmfmac43570-pcie.bin
LINKS.brcmfmac+= ../cypress/cyfmac43570-pcie.clm_blob brcm/brcmfmac43570-pcie.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac4373-sdio.bin brcm/brcmfmac4373-sdio.bin
LINKS.brcmfmac+= ../cypress/cyfmac4373-sdio.clm_blob brcm/brcmfmac4373-sdio.clm_blob
LINKS.brcmfmac+= ../cypress/cyfmac54591-pcie.bin brcm/brcmfmac54591-pcie.bin
LINKS.brcmfmac+= ../cypress/cyfmac54591-pcie.clm_blob brcm/brcmfmac54591-pcie.clm_blob
LINKS.brcmfmac+= brcmfmac43362-sdio.WC121.txt brcm/brcmfmac43362-sdio.kobo,aura.txt
LINKS.brcmfmac+= brcmfmac43362-sdio.WC121.txt brcm/brcmfmac43362-sdio.kobo,tolino-shine2hd.txt
LINKS.brcmfmac+= brcmfmac43362-sdio.cubietech,cubietruck.txt brcm/brcmfmac43362-sdio.lemaker,bananapro.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.beagle,beaglev-starlight-jh7100-a1.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.beagle,beaglev-starlight-jh7100-r0.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.friendlyarm,nanopi-neo4.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.friendlyarm,nanopi-r1.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.sinovoip,bananapi-m64.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.sinovoip,bpi-m2-plus.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.sinovoip,bpi-m2-ultra.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.sinovoip,bpi-m2-zero.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.sinovoip,bpi-m3.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.AP6212.txt brcm/brcmfmac43430-sdio.starfive,visionfive-v1.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.raspberrypi,3-model-b.txt brcm/brcmfmac43430-sdio.raspberrypi,model-zero-2-w.txt
LINKS.brcmfmac+= brcmfmac43430-sdio.raspberrypi,3-model-b.txt brcm/brcmfmac43430-sdio.raspberrypi,model-zero-w.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.beagle,am5729-beagleboneai.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.khadas,vim.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,pinebook-pro.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,pinenote-v1.1.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,pinenote-v1.2.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,pinephone-pro.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,quartz64-a.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,quartz64-b.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,rockpro64-v2.0.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,rockpro64-v2.1.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,soquartz-blade.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,soquartz-cm4io.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.AW-CM256SM.txt brcm/brcmfmac43455-sdio.pine64,soquartz-model-a.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,3-model-b-plus.txt brcm/brcmfmac43455-sdio.raspberrypi,3-model-a-plus.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.Raspberry\ Pi\ Foundation-Raspberry\ Pi\ 4\ Model\ B.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.Raspberry\ Pi\ Foundation-Raspberry\ Pi\ Compute\ Module\ 4.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.raspberrypi,4-compute-module.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.raspberrypi,5-compute-module.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.raspberrypi,5-model-b.txt
LINKS.brcmfmac+= brcmfmac43455-sdio.raspberrypi,4-model-b.txt brcm/brcmfmac43455-sdio.raspberrypi,500.txt
LINKS.brcmfmac+= brcmfmac4356-sdio.AP6356S.txt brcm/brcmfmac4356-sdio.firefly,firefly-rk3399.txt
LINKS.brcmfmac+= brcmfmac4356-sdio.AP6356S.txt brcm/brcmfmac4356-sdio.friendlyarm,nanopc-t4.txt
LINKS.brcmfmac+= brcmfmac4356-sdio.AP6356S.txt brcm/brcmfmac4356-sdio.friendlyarm,nanopi-m4.txt
LINKS.brcmfmac+= brcmfmac4356-sdio.AP6356S.txt brcm/brcmfmac4356-sdio.khadas,vim2.txt
LINKS.brcmfmac+= brcmfmac4356-sdio.AP6356S.txt brcm/brcmfmac4356-sdio.vamrs,rock960.txt
LINKS.${FWDRV}+=	${LINKS.brcmfmac}

## Subdirectories that should be kept from the larger linux-firmware repository.
SUBDIRS.brcmfmac+= brcm
SUBDIRS.brcmfmac+= cypress
SUBDIRS.${FWDRV}+=	${SUBDIRS.brcmfmac}

#
# SECTION: Chipset family specific definitions for brcmsmac.
#

## Firmware blobs, etc.
FILES.brcmsmac+=	brcm/bcm43xx-0.fw
FILES.brcmsmac+=	brcm/bcm43xx_hdr-0.fw
FILES.${FWDRV}+=	${FILES.brcmsmac}

## License files.
LICENSE_FILES.brcmsmac+=	LICENCE.broadcom_bcm43xx
LICENSE_FILES.${FWDRV}+= ${LICENSE_FILES.brcmsmac}
LINKS.${FWDRV}+=	${LINKS.brcmsmac}

## Subdirectories that should be kept from the larger linux-firmware repository.
SUBDIRS.brcmsmac+= brcm
SUBDIRS.${FWDRV}+=	${SUBDIRS.brcmsmac}
