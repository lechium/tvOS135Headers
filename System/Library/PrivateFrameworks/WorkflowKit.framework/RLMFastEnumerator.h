/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class RLMRealm;

@interface RLMFastEnumerator : NSObject {

	id _strongBuffer[16];
	RLMRealm* _realm;
	RLMClassInfo* _info;
	Results* _results;
	Results* _snapshot;
	id _collection;

}
-(void)dealloc;
-(void)detach;
-(id)initWithList:(List*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithResults:(Results*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
@end

