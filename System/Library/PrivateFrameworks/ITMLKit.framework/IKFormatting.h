/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {

	NSMutableDictionary* _dateFormatters;
	os_unfair_lock_s _dateFormattersLock;
	NSMutableDictionary* _numberFormatters;
	os_unfair_lock_s _numberFormattersLock;
	NSNumberFormatter* _durationFormatter;
	NSNumberFormatter* _durationPaddedFormatter;

}
+(id)sharedInstance;
+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
-(id)init;
-(id)formatLocalizedNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 currencyCode:(id)arg5 ;
-(id)formatLocalizedLocaleIdentifier:(id)arg1 ;
-(id)joinComponentsWithLocalizedCommaAndSpace:(id)arg1 ;
-(id)joinComponentsWithLocalizedSemicolonAndSpace:(id)arg1 ;
-(id)formatDate:(id)arg1 format:(id)arg2 ;
-(id)formatDuration:(id)arg1 ;
-(id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 ;
-(id)joinComponents:(id)arg1 withASCII:(id)arg2 arabic:(id)arg3 ethiopic:(id)arg4 ideograph:(id)arg5 ;
@end

