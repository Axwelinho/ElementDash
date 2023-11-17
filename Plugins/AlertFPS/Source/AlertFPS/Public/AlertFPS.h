// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SlateBasics.h"
#include "SlateExtras.h"

class FAlertFPSModule : public IModuleInterface
{
public:


	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	SLATE_BEGIN_ARGS(SMyCustomWidget) {}
	SLATE_END_ARGS()

    void Construct(const FArguments& InArgs)
    {
        ChildSlot
            [
                // Créer un bouton
                SNew(SButton)
                    .Text(FText::FromString("Mon Bouton"))
                    .OnClicked(this, &SMyCustomWidget::OnMyButtonClicked)
            ];
    }

    // Callback appelé lors du clic sur le bouton
    FReply OnMyButtonClicked()
    {
        // Logique du bouton ici
        return FReply::Handled();
    }
};
