/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CNiOSABConstantsMapping : NSObject {

	NSDictionary* _mapping;
	id _defaultConstant;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,retain) id defaultConstant;                  //@synthesize defaultConstant=_defaultConstant - In the implementation block
+(id)CNToABSourceTypeConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)CNToABPersonShortNameFormatConstantsMapping;
+(id)ABToCNContactShortNameFormatConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
-(NSDictionary *)mapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setMapping:(NSDictionary *)arg1 ;
-(void)setDefaultConstant:(id)arg1 ;
-(id)defaultConstant;
@end

