/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface CNUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _os_unfair_lock;

}
-(id)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
-(void)assertCurrentThreadIsOwner;
-(void)assertCurrentThreadIsNotOwner;
@end

