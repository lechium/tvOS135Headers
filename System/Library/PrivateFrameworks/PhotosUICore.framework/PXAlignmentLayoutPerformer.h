/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXAlignmentLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* _children;
	long long _xAlignment;
	long long _yAlignment;

}

@property (assign,nonatomic) long long xAlignment;                                //@synthesize xAlignment=_xAlignment - In the implementation block
@property (assign,nonatomic) long long yAlignment;                                //@synthesize yAlignment=_yAlignment - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(CGSize)performLayout;
-(void)preprareForReuse;
-(long long)xAlignment;
-(void)setXAlignment:(long long)arg1 ;
-(long long)yAlignment;
-(void)setYAlignment:(long long)arg1 ;
@end

