/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class PXUILabel, PXLabelSpec, NSString, UIView;

@interface PXUILabelTile : NSObject <PXUIViewBasicTile> {

	PXUILabel* _label;
	PXLabelSpec* _spec;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIView *)view;
-(void)_setSpec:(id)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
@end

