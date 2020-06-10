/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@interface HIDTransaction : NSObject {

	IOHIDTransactionRef _transaction;

}

@property (assign) long long direction; 
-(id)description;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(BOOL)commitElements:(id)arg1 error:(out id*)arg2 ;
@end

