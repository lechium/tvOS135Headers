/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {

	NSObject*<OS_dispatch_data> _remainingData;
	/*^block*/id _completion;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)drain:(CFWriteStreamRef)arg1 ;
-(void)callCompletion;
@end

