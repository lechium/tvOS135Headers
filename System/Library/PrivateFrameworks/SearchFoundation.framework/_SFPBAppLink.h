/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAppLink.h>
@class NSString, _SFPBPunchout, _SFPBImage, NSData;


@protocol _SFPBAppLink <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBPunchout * appPunchout; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(_SFPBImage *)image;
-(void)setImage:(id)arg1;
-(NSData *)jsonData;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(_SFPBPunchout *)appPunchout;
-(void)setAppPunchout:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBPunchout, _SFPBImage, NSData;

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding> {

	int _imageAlign;
	NSString* _title;
	_SFPBPunchout* _appPunchout;
	_SFPBImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * appPunchout;              //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageAlign;                           //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBImage *)image;
-(void)setImage:(_SFPBImage *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(_SFPBPunchout *)appPunchout;
-(void)setAppPunchout:(_SFPBPunchout *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

