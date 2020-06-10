/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISearchToken, PXSearchTokenRepresentedObject, UIImage, NSString, NSAttributedString;

@interface PXSearchToken : NSObject {

	UISearchToken* _searchObject;
	PXSearchTokenRepresentedObject* _representedObject;
	UIImage* _image;
	NSString* _text;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) UISearchToken * searchObject;                                    //@synthesize searchObject=_searchObject - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                               //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) PXSearchTokenRepresentedObject * representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setRepresentedObject:(PXSearchTokenRepresentedObject *)arg1 ;
-(PXSearchTokenRepresentedObject *)representedObject;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)textValue;
-(id)initWithText:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
-(id)initWithAttributedText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3 ;
-(id)initWithText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3 ;
-(UISearchToken *)searchObject;
-(void)setSearchObject:(UISearchToken *)arg1 ;
@end

