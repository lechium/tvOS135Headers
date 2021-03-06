/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue {

	/*^block*/id _pl_operationCountChangedBlock;

}

@property (copy) id pl_operationCountChangedBlock;              //@synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)pl_operationCountChangedBlock;
-(void)setPl_operationCountChangedBlock:(id)arg1 ;
@end

