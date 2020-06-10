/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface CNActionItem : NSObject {

	BOOL _disabled;
	UIImage* _image;
	NSString* _title;
	NSString* _type;

}

@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL disabled;                 //@synthesize disabled=_disabled - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
@end

