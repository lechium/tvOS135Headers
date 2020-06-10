/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class NSString, _UIBatteryView, UIImageView, UILabel;

@interface WFHotspotDetailsView : UIStackView {

	unsigned long long _batteryCharge;
	NSString* _cellularProtocolString;
	unsigned long long _signalBars;
	_UIBatteryView* _batteryView;
	UIImageView* _signalImageView;
	UILabel* _networkTypeLabel;

}

@property (nonatomic,retain) _UIBatteryView * batteryView;                  //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) UIImageView * signalImageView;                 //@synthesize signalImageView=_signalImageView - In the implementation block
@property (nonatomic,retain) UILabel * networkTypeLabel;                    //@synthesize networkTypeLabel=_networkTypeLabel - In the implementation block
@property (assign,nonatomic) unsigned long long batteryCharge;              //@synthesize batteryCharge=_batteryCharge - In the implementation block
@property (nonatomic,copy) NSString * cellularProtocolString;               //@synthesize cellularProtocolString=_cellularProtocolString - In the implementation block
@property (assign,nonatomic) unsigned long long signalBars;                 //@synthesize signalBars=_signalBars - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setupSubviews;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(UIImageView *)signalImageView;
-(void)setSignalImageView:(UIImageView *)arg1 ;
-(NSString *)cellularProtocolString;
-(void)setSignalBars:(unsigned long long)arg1 ;
-(void)setBatteryCharge:(unsigned long long)arg1 ;
-(void)updateSignalBars;
-(void)setNetworkTypeLabel:(UILabel *)arg1 ;
-(void)updateCellularProtocolLabel;
-(UILabel *)networkTypeLabel;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(unsigned long long)batteryCharge;
-(_UIBatteryView *)batteryView;
-(id)attributedStringFromCellularProtocol:(id)arg1 ;
-(unsigned long long)signalBars;
@end

