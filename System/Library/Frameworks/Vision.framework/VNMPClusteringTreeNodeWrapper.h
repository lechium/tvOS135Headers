/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(void)dealloc;
-(id)left;
-(id)descriptor;
-(void*)node;
-(float)distance;
-(id)right;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(int)nodeId;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(void)setNode:(void*)arg1 ;
-(BOOL)freeNodeOnDealloc;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
@end

