/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(CGSize)size;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
@end

