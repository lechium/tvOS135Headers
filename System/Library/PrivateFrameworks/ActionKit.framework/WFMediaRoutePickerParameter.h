/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, NSString;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _routePicker;

}

@property (nonatomic,retain) WFMediaRoutePicker * routePicker;              //@synthesize routePicker=_routePicker - In the implementation block
@property (nonatomic,readonly) long long routeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefinition:(id)arg1 ;
-(long long)routeType;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)preferItemPickerSheet;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(WFMediaRoutePicker *)routePicker;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;
-(BOOL)shouldDefaultToLocalDeviceEndpoint;
-(id)sortedStatesForAvailableRoutes:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(void)startUpdatingPossibleValues;
-(void)stopUpdatingPossibleValues;
-(void)setRoutePicker:(WFMediaRoutePicker *)arg1 ;
@end

