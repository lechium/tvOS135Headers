/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFMutex : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
@end

