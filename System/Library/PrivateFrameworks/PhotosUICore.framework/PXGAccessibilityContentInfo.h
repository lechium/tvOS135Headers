/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PXGAccessibilityContentInfo <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) long long contentKind; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * imageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> asset; 
@property (nonatomic,readonly) NSObject*<PXAccessibilityView> view; 
@property (nonatomic,readonly) BOOL selected; 
@property (nonatomic,copy,readonly) NSArray * selectedContent; 
@property (nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) NSArray * px_accessibilityChildren; 
@required
-(NSString *)title;
-(NSString *)text;
-(CGRect)frame;
-(NSString *)subtitle;
-(BOOL)visible;
-(BOOL)selected;
-(id<PXDisplayAsset>)asset;
-(NSObject*<PXAccessibilityView>)view;
-(NSString *)imageName;
-(long long)contentKind;
-(NSArray *)selectedContent;
-(NSArray *)px_accessibilityChildren;

@end

