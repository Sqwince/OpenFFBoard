/*
 * FFBHIDExt.cpp
 *
 *  Created on: 30.11.2022
 *      Author: Yannick
 */


#include "FFBHIDExt_CAN.h"

#ifdef FFBHIDEXT_CAN

#include "usb_hid_ffb_desc.h"

// Unique identifier for listing
ClassIdentifier FFBHIDExt_CAN::info = {
		 .name = "HID Gamepad (With CAN Export)" ,
		 .id=CLSID_CUSTOM,
		 .visibility = ClassVisibility::visible
 };

const ClassIdentifier FFBHIDExt_CAN::getInfo(){
	return info;
}


FFBHIDExt_CAN::FFBHIDExt_CAN() :
		FFBHIDMain(1)
{
	FFBHIDMain::setFFBEffectsCalc(ffb, effects_calc);
}

FFBHIDExt_CAN::~FFBHIDExt_CAN() {

}



void FFBHIDExt_CAN::usbInit(){
	this->usbdev = std::make_unique<USBdevice>(&usb_devdesc_ffboard_composite,usb_cdc_hid_conf_gamepad,&usb_ffboard_strings_default);
	FFBHIDMain::UsbHidHandler::setHidDesc(hid_gamepad_desc);

	usbdev->registerUsb();
}

#endif
