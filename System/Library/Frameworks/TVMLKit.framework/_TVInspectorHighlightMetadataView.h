/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _TVInspectorHighlightMetadataView : UIView {

	UILabel* _descriptionLabel;
	UILabel* _frameLabel;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * frameLabel;                    //@synthesize frameLabel=_frameLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)descriptionLabel;
-(UILabel *)frameLabel;
@end
