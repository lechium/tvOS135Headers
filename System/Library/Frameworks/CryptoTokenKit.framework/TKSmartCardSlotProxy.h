/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlotNotification.h>

@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {

	TKSmartCardSlot* _slot;
	NSHashTable* _cards;

}

@property (readonly) NSHashTable * cards;              //@synthesize cards=_cards - In the implementation block
-(id)initWithSlot:(id)arg1 ;
-(NSHashTable *)cards;
-(void)notifyWithParameters:(id)arg1 ;
-(void)cardSessionRequested;
@end

