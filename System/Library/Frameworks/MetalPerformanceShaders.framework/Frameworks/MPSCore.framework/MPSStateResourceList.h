/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSStateResourceList : NSObject {

	ResourceListNode* _list;

}
+(id)resourceList;
+(id)resourceListWithTextureDescriptors:(id)arg1 ;
+(id)resourceListWithBufferSizes:(unsigned long long)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)appendTexture:(id)arg1 ;
-(void)appendBuffer:(unsigned long long)arg1 ;
-(void)appendTexture:(id)arg1 format:(unsigned long long)arg2 ;
@end
