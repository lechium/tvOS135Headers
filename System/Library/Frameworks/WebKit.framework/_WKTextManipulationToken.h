/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _WKTextManipulationToken : NSObject {

	BOOL _excluded;
	NSString* _identifier;
	NSString* _content;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                //@synthesize content=_content - In the implementation block
@property (assign,getter=isExcluded,nonatomic) BOOL excluded;                 //@synthesize excluded=_excluded - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(void)setExcluded:(BOOL)arg1 ;
-(BOOL)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(BOOL)isExcluded;
@end

