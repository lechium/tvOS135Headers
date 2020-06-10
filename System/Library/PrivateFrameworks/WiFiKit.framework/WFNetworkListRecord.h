/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFNetworkListRecord <NSObject,NSCopying>
@required
-(unsigned long long)uniqueIdentifier;
-(BOOL)isSecure;
-(id)title;
-(id)subtitle;
-(long long)rssi;
-(id)ssid;
-(BOOL)isKnown;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)isAdhoc;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isPopular;
-(BOOL)iOSHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(float)scaledRSSI;
-(unsigned long long)signalBars;
-(BOOL)isEnterprise;
-(BOOL)prominentDisplay;

@end
