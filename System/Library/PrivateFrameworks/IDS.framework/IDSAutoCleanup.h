/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSAutoCleanup : NSObject {

	/*^block*/id _cleanupBlock;
	int _accessCount;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)incrementAccessCount;
@end

