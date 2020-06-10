/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFTextInputParameter : WFParameter {

	BOOL _secureTextEntry;
	BOOL _smartQuotesDisabled;
	BOOL _smartDashesDisabled;
	BOOL _multiline;
	BOOL _processesIntoContentItems;
	NSString* _textContentType;
	NSString* _prefix;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	unsigned long long _hintDisplayMode;
	unsigned long long _syntaxHighlightingType;

}

@property (nonatomic,copy) NSString * prefix;                                              //@synthesize prefix=_prefix - In the implementation block
@property (getter=isSecureTextEntry,nonatomic,readonly) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy,readonly) NSString * textContentType;                            //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) BOOL smartQuotesDisabled;                                   //@synthesize smartQuotesDisabled=_smartQuotesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL smartDashesDisabled;                                   //@synthesize smartDashesDisabled=_smartDashesDisabled - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (getter=isMultiline,nonatomic,readonly) BOOL multiline;                          //@synthesize multiline=_multiline - In the implementation block
@property (nonatomic,readonly) unsigned long long hintDisplayMode;                         //@synthesize hintDisplayMode=_hintDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned long long syntaxHighlightingType;                  //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (nonatomic,readonly) BOOL processesIntoContentItems;                             //@synthesize processesIntoContentItems=_processesIntoContentItems - In the implementation block
-(long long)keyboardType;
-(id)initWithDefinition:(id)arg1 ;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)textContentType;
-(BOOL)isMultiline;
-(BOOL)isSecureTextEntry;
-(long long)textAlignment;
-(void)setLocalizedPlaceholder:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)shouldAlignLabels;
-(BOOL)processesIntoContentItems;
-(id)hintForState:(id)arg1 ;
-(BOOL)smartQuotesDisabled;
-(BOOL)smartDashesDisabled;
-(unsigned long long)hintDisplayMode;
-(unsigned long long)syntaxHighlightingType;
@end

