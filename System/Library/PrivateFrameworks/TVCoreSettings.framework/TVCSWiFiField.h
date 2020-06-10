/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectWFNetworkView;
@class UIViewController, NSString;

@interface TVCSWiFiField : NSObject {

	BOOL _hasEverBeenDefined;
	id<NSObject><WFNetworkView> _provider;
	long long _fieldType;
	id _value;

}

@property (nonatomic,retain) UIViewController * associatedViewController; 
@property (assign,nonatomic) long long fieldType;                                      //@synthesize fieldType=_fieldType - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject><WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL hasEverBeenDefined;                                  //@synthesize hasEverBeenDefined=_hasEverBeenDefined - In the implementation block
@property (nonatomic,retain) id value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * fieldName; 
+(id)fieldsWithRequestedFields:(long long)arg1 ;
+(id)fieldsWithRequestedFields:(long long)arg1 provider:(id)arg2 ;
+(id)fieldWithFieldType:(long long)arg1 provider:(id)arg2 ;
+(id)fieldWithFieldType:(long long)arg1 ;
-(id)description;
-(BOOL)isSecure;
-(id)value;
-(void)setValue:(id)arg1 ;
-(long long)keyboardType;
-(void)setProvider:(id<NSObject><WFNetworkView>)arg1 ;
-(id<NSObject><WFNetworkView>)provider;
-(NSString *)fieldName;
-(id)buttonText;
-(id)headerText;
-(long long)fieldType;
-(BOOL)hasEverBeenDefined;
-(id)initWithFieldType:(long long)arg1 provider:(id)arg2 ;
-(void)setHasEverBeenDefined:(BOOL)arg1 ;
-(void)_synchronizeToProvider;
-(SEL)_providerSetter;
-(id)initWithFieldType:(long long)arg1 ;
-(id)messageTextForNetwork:(id)arg1 ;
-(void)setFieldType:(long long)arg1 ;
-(UIViewController *)associatedViewController;
-(void)setAssociatedViewController:(UIViewController *)arg1 ;
@end

