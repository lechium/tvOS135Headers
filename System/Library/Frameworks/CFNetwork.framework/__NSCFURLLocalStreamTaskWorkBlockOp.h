/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork {

	/*^block*/id _block;
	BOOL _shouldWaitForTls;

}
+(id)opWithBlock:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)dealloc;
-(void)executeBlock;
-(BOOL)shouldWaitForTLS;
-(void)markBlockAsWaitingOnTls:(BOOL)arg1 ;
@end

